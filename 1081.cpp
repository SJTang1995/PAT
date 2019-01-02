#include<cstdio>
#include<string>
using namespace std;
struct fraction{
	int fm,fz;	
};
int func1(long long a,long long b){
	long long c,t;
	t=a*b;
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	if(a%b==0){
		c=a;
		return c;
	}
	do{
		c=a%b;
		if(c!=0){
			a=b;
			b=c;
		}
	}while(c!=0);
	c=t/b;
	return c;
} 
int func2(long long a,long long b){
	long long c;
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	if(a%b==0){
		c=b;
		return c;
	}
	do{
		c=a%b;
		if(c!=0){
			a=b;
			b=c;
		}
	}while(c!=0);
	c=b;
	return c;
} 
int main(){
	int n;
	scanf("%d",&n);
	fraction a[100];
	long long p,t=1,q;
	for(int i=0;i<n;i++){
		scanf("%d/%d",&p,&t);
		if(p!=0){
			a[i].fz=p;
			a[i].fm=t;
		}
		if(p==0){
			i--;
			n--;
		}
	}
	for(int i=0;i<n;i++) t=func1(t,a[i].fm);
	int refz=0;
	for(int i=0;i<n;i++){
		refz=refz+t/a[i].fm*a[i].fz;		
	}
	if(refz%t==0) printf("%d",refz/t);
	else{
		if(refz/t!=0){
			printf("%d",refz/t);
			printf(" ");
		}
		p=refz/func2(refz,t);
		q=t/func2(refz,t);
		printf("%d/%d",p%q,q);
	}
	return 0;
}
