#include<iostream>
using namespace std;
int main(){
	float a[1001]={0},b[2001]={0};
	int t,k;
	float p,q;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&t);
		scanf("%f",&a[t]);
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&t);
		scanf("%f",&p);
		for(int j=0;j<1001;j++){
			if(a[j]!=0){
				q=p*a[j];
				b[j+t]=b[j+t]+q;		
			}
		}
	}
	t=0;
	for(int i=0;i<=2000;i++){
		if(b[i]!=0) t++;
	}
	printf("%d",t);
	for(int i=2000;i>=0;i--){
		if(b[i]!=0){
			printf(" %d %.1f",i,b[i]);
		}
	}
	return 0;
} 
