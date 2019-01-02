#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[1001],b[1001];
	int H[62]={0};
	int t,p;
	cin>>a;
	cin>>b;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0'&&a[i]<='9'){
			t=a[i]-'0';
			H[t]++;
		}
		else if(a[i]>='a'&&a[i]<='z'){
			t=a[i]-'a'+10;
			H[t]++;
		}
		else{
			t=a[i]-'A'+36;
			H[t]++;
		}		
	}
	for(int i=0;i<strlen(b);i++){
		if(b[i]>='0'&&b[i]<='9'){
			t=b[i]-'0';
			H[t]--;
		}
		else if(b[i]>='a'&&b[i]<='z'){
			t=b[i]-'a'+10;			
			H[t]--;
		}
		else{
			t=b[i]-'A'+36;
			H[t]--;
		}
	}
	t=0;
	p=0;
	for(int i=0;i<62;i++){
		if(H[i]<0) t=t+H[i];
		else p=p+H[i];
	}
	if(t<0) cout<<"No "<<-t;
	else cout<<"Yes "<<p;
	return 0;
}
