#include<iostream>
#include<string>
using namespace std;
struct bign{
	int a[21];
	int lenth;
	bign(){
		lenth=0;
	}
}; 
bign change(string str){
	bign a;
	a.lenth=str.size();
	int i;
	for(i=0;i<a.lenth;i++){
		a.a[i]=str[a.lenth-i-1]-'0';
	}
	return a;
}
bign multi(bign a,int b){
	bign c;
	int t,fb=0;
	for(int i=0;i<a.lenth;i++){
		t=a.a[i]*b+fb;
		c.a[c.lenth++]=t%10;
		fb=t/10;
	}
	while(fb){
		c.a[c.lenth++]=fb%10;
		fb=fb/10;
	}
	return c; 
}
bool match(bign a,bign b){
	if(a.lenth!=b.lenth) return false;
	int bit[10]={0};//,bitb[10];
	for(int i=0;i<a.lenth;i++){
		bit[a.a[i]]++;
		bit[b.a[i]]--;
	}
	for(int i=0;i<10;i++){
		if(bit[i]!=0){
		return false;
		}
	}
	return true;
}
int main(){
	string str;
	getline(cin,str);
	bign a=change(str);
	bign b=multi(a,2);
	if(match(a,b)==true) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	for(int i=b.lenth-1;i>=0;i--){
		cout<<b.a[i];
	}
	cout<<endl<<a.lenth<<" "<<b.lenth;
	return 0;
}
