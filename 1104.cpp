#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	float a,sum=0;
	for(int i=1;i<=n;i++){
		scanf("%f",&a);
		sum=sum+a*i*(n+1-i);
	}
	printf("%.2f",sum);
	return 0;
}
