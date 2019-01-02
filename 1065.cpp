#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[n][3];
	long long t;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	for(int i=0;i<n;i++){
		t=a[i][0]+a[i][1];
		if(a[i][0]>0&&a[i][1]>0&&t<0) cout<<"Case #"<<i+1<<": true";
		else if(a[i][0]<0&&a[i][1]<0&&t>=0) cout<<"Case #"<<i+1<<": false";
		else if(a[i][2]<t) cout<<"Case #"<<i+1<<": true";
		else cout<<"Case #"<<i+1<<": false";
		if(i<n-1) cout<<endl;
	}
	return 0;
} 
