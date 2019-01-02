#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char ori[81],exm[81];
	cin>>ori;
	cin>>exm;
	for(int i=0;i<strlen(exm);i++){
		for(int j=0;j<strlen(ori);j++){
			if((ori[j]>='0'&&ori[j]<='9')||ori[j]=='_'){
				if(ori[j]==exm[i]) ori[j]='*';
			}
			if(ori[j]>='a'&&ori[j]<='z'){
				if(ori[j]==exm[i]||ori[j]==exm[i]-'A'+'a') ori[j]='*';
			}
			if(ori[j]>='A'&&ori[j]<='Z'){
				if(ori[j]==exm[i]||ori[j]==exm[i]-'a'+'A') ori[j]='*';
			}
		}
	}
	char t;
	for(int i=0;i<strlen(ori);i++){
		if(ori[i]=='*') continue;
		if((ori[i]>='0'&&ori[i]<='9')||ori[i]=='_') cout<<ori[i];
		if(ori[i]>='A'&&ori[i]<='Z') cout<<ori[i];
		if(ori[i]>='a'&&ori[i]<='z'){
			t=ori[i]-'a'+'A';
			cout<<t;
		}
		for(int j=i+1;j<strlen(ori);j++){
			if((ori[j]>='0'&&ori[j]<='9')||ori[j]=='_'){
				if(ori[j]==ori[i]) ori[j]='*';
			}
			if(ori[j]>='a'&&ori[j]<='z'){
				if(ori[j]==ori[i]||ori[j]==ori[i]-'A'+'a') ori[j]='*';
			}
			if(ori[j]>='A'&&ori[j]<='Z'){
				if(ori[j]==ori[i]||ori[j]==ori[i]-'a'+'A') ori[j]='*';
			}
		}
	}
	return 0;
}
