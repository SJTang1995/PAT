#include <iostream>
#include <string>
int main(){
	using namespace std;
	string str;
	cin>>str;
	int i,a=0,t=str.length();
	for(i=0;i<t;i++){
		a=a+str[i]-48;
	}
	string num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	string p=to_string(a);
	for(i=0;i<p.length();i++){
		t=p[i]-48;
		cout<<num[t];
		if(i!=p.length()-1){
			cout<<' ';
		}
	}
	return 0;
}
