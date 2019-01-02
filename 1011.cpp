#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	int i,j,k;
	float l;
	float a[4][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++){
		l=0;		
		k=0;
		for(j=0;j<3;j++){
			if(a[i][j]>l){
				l=a[i][j];
				k=j;				
			}
		}
		a[3][i]=l;
		if(k==0){
			cout<<"W"<<" ";
		}
		else if(k==1){
			cout<<"T"<<" ";
		}
		else{
			cout<<"L"<<" ";
		}
	}
	cout<<fixed<<setprecision(2)<<(a[3][0]*a[3][1]*a[3][2]*0.65-1)*2;
	return 0;
}
