#include<iostream>
using namespace std;
int main(){
	int n,i,p=0,time=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	} 
	for(i=0;i<n;i++){
		if(a[i]<p){
			time=time+(p-a[i])*4+5;
			p=a[i];			
		}
		else{
			time=time+(a[i]-p)*6+5;
			p=a[i];
		}
	}
	cout<<time;
	return 0;
}
