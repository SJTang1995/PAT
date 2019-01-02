#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main(){
	int m,n,t,p;
	scanf("%d%d",&m,&n);
	map<int,int> c;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&t);
			if(c.find(t)!=c.end()) c[t]++;
			else c[t]=1;
		}
	}
	t=0;
	p=0;
	for(map<int,int>::iterator it=c.begin();it!=c.end();it++){
		if(it->second>p){
			t=it->first;
			p=it->second;
		}
	} 
	cout<<t;
	return 0;
} 
