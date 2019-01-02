#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a;
	cin>>a;
	vector<int> b(a),c(10001);
	for(int i=0;i<a;i++){
		cin>>b[i];
		c[b[i]]++;
	}
	int t=-1;
	for(int i=0;i<a;i++){
		if(c[b[i]]==1){
			t=b[i];
			break;
		}
	}
	if(t==-1) cout<<"None";
	else cout<<t;
	return 0;
} 
