#include<iostream>
#include<vector>
#include<stack>
int main(){
	using namespace std;
	int a,b,i,p,t;
	cin>>a>>b;
	stack<int> stk;
	i=-1;
	while(a!=0){
		i+=1;
		if(a>b){
			stk.push(a%b);
			a=a/b;
		}
		else{
			stk.push(a);
			a=0;
		}
	}
	vector<int> vec(i+1);
	for(p=0;p<=i;p++){
		vec[p]=stk.top();
		stk.pop();
	}
    for(p=0;p<=i/2;p++){
		if(vec[p]!=vec[i-p]){
			cout<<"No"<<endl;
			for(t=0;t<=i;t++){
				cout<<vec[t];
				if(t!=i){
					cout<<" ";
				}
			}
		return 0;
		}
	}
	cout<<"Yes"<<endl;
	for(t=0;t<=i;t++){
		cout<<vec[t];
		if(t!=i){
			cout<<" ";
		}
	}
	return 0;
} 
