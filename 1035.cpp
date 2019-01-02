#include<string>
#include<iostream>
#include<queue>
using namespace std;
struct data{
	string num;
	string pas;
};
bool check(data a){
	for(int i=0;i<a.pas.size();i++){
		if(a.pas[i]=='0'||a.pas[i]=='O'||a.pas[i]=='1'||a.pas[i]=='l') return false;
	}
	return true;
}
string correct(string a){
	string b;
	for(int i=0;i<a.size();i++){
		if(a[i]=='0') b=b+"%";
		else if(a[i]=='O') b=b+"o";
		else if(a[i]=='1') b=b+"@";
		else if(a[i]=='l') b=b+"L";
		else b=b+a[i];
	}
	return b;
}
int main(){
	int a,b=0;
	cin>>a;
	data t[a];
	for(int i=0;i<a;i++){
		cin>>t[i].num>>t[i].pas;
	}
	queue<int> s;
	queue<string> ss;
	for(int i=0;i<a;i++){
		if(check(t[i])==false){
			ss.push(correct(t[i].pas));
			s.push(i);
		};
	}
	if(s.size()==0){
		if(a==1) cout<<"There is 1 account and no account is modified";
		if(a>1) cout<<"There are "<<a<<" accounts and no account is modified";
	}
	if(s.size()){
		cout<<s.size()<<endl;\
		while(s.size()){
			cout<<t[s.front()].num<<" "<<ss.front();
			s.pop();
			ss.pop();
			if(s.size()!=0) cout<<endl;
		}
	}
	return 0;
}
