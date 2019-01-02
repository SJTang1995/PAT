#include<iostream>
#include<cmath>
using namespace std;
int mult(int a,int b){
	int res=1;
	for(int i=a;i<=a+b;i++){
		res=res*i;
	}
	return res;
}
int main(){
	int n,t,p,q,r;
	cin>>n;
	t=sqrt(n);
	//cout<<t;
	r=n;
	for(int i=1;i<t-1;i++){
		for(int j=2;j<=t+1-i;j++){
			p=mult(j,i);
			if(p>n) break;
			if(n%p==0){
				r=j;
				q=i;
				break;
			}
		}
	}
	if(r!=n){
		cout<<q+1<<endl;
		for(int i=0;i<=q;i++){
			cout<<r+i;
			if(i!=q) cout<<"*";
		}
	}
	else cout<<1<<endl<<r;
	return 0;
} 
