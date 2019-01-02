#include<iostream>
using namespace std;
int main(){
	float a[21]={-1},b[21]={-1},n[20];
	cin>>a[0];
	for(int i=1;i<2*a[0]+1;i++){
		cin>>a[i];
	}
	cin>>b[0];
	for(int i=1;i<2*b[0]+1;i++){
		cin>>b[i];
	}
	int i=1,j=1,k=0;
	int x=a[0],y=b[0];
	while(i<x&&j<y){
		if(a[i]>b[j]){ 
			n[2*k]=a[2*i];
			n[2*k+1]=a[2*i+1];
			i++;
			k++;
		}
		else if(a[i]==b[j]){
			n[2*k]=a[2*i];
			n[2*k+1]=a[2*i+1]+b[2*j+1];
			i++;
			j++;
			k++;
		}
		else{
			n[2*k]=b[2*j];
			n[2*k+1]=b[2*j+1];
			j++;
			k++;
		}
		
		
	}
	cout<<k<<" ";
	for(int i=0;i<2*k+1;i++){
		cout<<n[i];
		if(i<2*k+1) cout<<" ";
	}
	return 0;
} 
