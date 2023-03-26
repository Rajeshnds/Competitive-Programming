#include<bits/stdc++.h>
using namespace std;
int n,s,t,m,road[1001][1001];
void bfs(int s,int a[]){
	vector<int>v(1001);
	queue<int>q;
	q.push(s);
	a[s]=0;
	v[s]=1;
	while(!q.empty()){
		int b=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(road[b][i]&&!v[i]){
				a[i]=a[b]+1;
				v[i]=1;
				q.push(i);
			}
		}
	}
}
void solve(){
	int StoT[1001]={0},TtoS[1001]={0};
	bfs(s,StoT);
	bfs(t,TtoS);
	int m=StoT[t],ans=0;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(road[i][j])continue;
			if(min(StoT[i]+TtoS[j],StoT[j]+TtoS[i])+1>=m)ans++;
		}
	}
	cout<<ans;
}
int main(){
	int a,b;
	cin>>n>>m>>s>>t;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		road[a][b]=road[b][a]=1;
	}
	solve();
}