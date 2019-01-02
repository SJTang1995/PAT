#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b,c;
	int t;
	getline(cin,a);
	getline(cin,b);
	for(int i=0;i<a.size();i++){
		t=0;
		for(int j=0;j<b.size();j++){
			if(a[i]==b[j]){
				t=1;
				break;
			}
		}
		if(t==0) c=c+a[i];
	}
	cout<<c;
	return 0;
}
