#include<cstdio>
#include<iostream>
using namespace std;
struct record{
	char id[20];
	int intime,outtime;
};
int main(){
	int a,b,c,d,e,f,n,t,p;
	scanf("%d",&n);
	record r[n];
	for(int i=0;i<n;i++){
		scanf("%s %d:%d:%d %d:%d:%d",r[i].id,&a,&b,&c,&d,&e,&f);
		r[i].intime=a*10000+b*100+c;
		r[i].outtime=d*10000+e*100+f;
	}
	p=246060;
	for(int i=0;i<n;i++){
		if(r[i].intime<=p){
			t=i;
			p=r[i].intime;
		}
	}
	p=0;
	cout<<r[t].id<<" ";
	for(int i=0;i<n;i++){
		if(r[i].outtime>=p){
			t=i;
			p=r[i].outtime;
		}
	}
	cout<<r[t].id;
	return 0;
} 
