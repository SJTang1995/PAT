#include<cstdio>
using namespace std;
int main(){
	int a[3],b[3],c[3];
	scanf("%d.%d.%d",&a[0],&a[1],&a[2]);
	scanf("%d.%d.%d",&b[0],&b[1],&b[2]);
	int fb=0,t;
	for(int i=2;i>=0;i--){
		t=a[i]+b[i]+fb;
		if(i==2){
			c[i]=t%29;
			fb=t/29;
		}
		if(i==1){
			c[i]=t%17;
			fb=t/17;
		}
		if(i==0){
			c[i]=t;
		}
	}
	printf("%d.%d.%d",c[0],c[1],c[2]);
	return 0;
} 
