#include<iostream>
using namespace std;
int main(){
	int a[54],b[54],c[54];
	int x;
	cin>>x;
	for(int i=0;i<54;i++){
		cin>>b[i];
	}
	a[0]=1;c[0]=1;
	for(int i=1;i<54;i++){
		a[i]=a[i-1]+1;
		c[i]=a[i-1]+1;
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<54;j++){
			c[b[j]-1]=a[j];
		}
		if(i<x-1){
			for(int k=0;k<54;k++) a[k]=c[k];
		}
	}
	for(int i=0;i<54;i++){
		if((c[i]-1)/13==0){
			cout<<"S"<<(c[i]-1)%13+1;
		}
		if((c[i]-1)/13==1){
			cout<<"H"<<(c[i]-1)%13+1;
		}
		if((c[i]-1)/13==2){
			cout<<"C"<<(c[i]-1)%13+1;
		}
		if((c[i]-1)/13==3){
			cout<<"D"<<(c[i]-1)%13+1;
		}
		if((c[i]-1)/13==4){
			cout<<"J"<<c[i]%13;
		}
		if(i<53) cout<<" ";
	}
	return 0;
}
