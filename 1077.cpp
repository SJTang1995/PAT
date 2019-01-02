#include<iostream>
#include<string>
using namespace std;
int main(){
	int N,n,m;
	bool h=true;
	cin>>N;
	getchar();
	string a[N];
	string r;
	char t;
	for(int i=0;i<N;i++){
		cin.getline(a[i]);
	}
	n=a[0].size();
	for(int i=0;i<n;i++){
		t=a[0][n-1-i];
		for(int j=0;j<N;j++){
			m=a[j].size();
			if(a[j][m-1-i]!=t){
				h=false;
				break;
			}
		}
		if(h==true){
			r=r+t;
		}
		else break;
	}
	if(r.size()==0) cout<<"nai";
	else{
		for(int i=r.size()-1;i>=0;i--) cout<<r[i];
	};
	return 0;
}
