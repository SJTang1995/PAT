#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
vector<int> G[1000]; 
bool visited[1000];
int t;
void dfs(int v){
	if(v==t) return;
	visited[v]=true;
	for(int i=0;i<G[v].size();i++){
		if(visited[G[v][i]]==false){
			dfs(G[v][i]);
		}
	}
}
int m,n,k;
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);		
	}
	for(int j=1;j<=k;j++){
		memset(visited,false,sizeof(visited));
		int s=0;
		scanf("%d",&t);
		for(int i=1;i<=n;i++){
			if(visited[i]==false&&i!=t){			
				dfs(i);
				s++;
			}
		}
		printf("%d\n",s-1);	
	}
	return 0;
}
