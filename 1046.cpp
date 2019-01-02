#include<iostream>
using namespace std;
int main(){
	int a,b=0,c;
	cin>>a;
	int n[a];
	for(int i=0;i<a;i++){
		cin>>n[i];
		b=b+n[i];
	}
	cin>>a;
	int m[a][2];
	for(int i=0;i<a;i++){
		cin>>m[i][0]>>m[i][1];
	}
	for(int i=0;i<a;i++){
		c=0;
		if(m[i][0]<m[i][1]){
			for(int t=m[i][0]-1;t<m[i][1]-1;t++){
				c=c+n[t];
			}
			if(c<b-c) cout<<c;
			else cout<<b-c;
		}
		if(m[i][0]>m[i][1]){
			for(int t=m[i][1]-1;t<m[i][0]-1;t++){
				c=c+n[t];
			}
			if(c<b-c) cout<<c;
			else cout<<b-c;
		}
		if(i<a-1) cout<<endl;
	}
	return 0;
}
