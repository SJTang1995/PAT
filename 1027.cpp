#include<iostream>
using namespace std;
void trans(int a){
	char b[2]={'0','0'};
	int i=0;
	while(a){
		if(a%13<10) b[i]=a%13+'0';
		else b[i]=a%13-10+'A';
		a=a/13;
		i++;
	}
	for(i=1;i>=0;i--){
		cout<<b[i];
	}
}
int main(){
	int a[3];
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	cout<<"#";
	for(int i=0;i<3;i++){
		trans(a[i]);	
	}
	return 0;
}
