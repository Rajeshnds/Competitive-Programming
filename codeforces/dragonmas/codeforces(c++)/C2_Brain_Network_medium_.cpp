#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005];
int dis[100005];
void dfs(int u,int p)
{
for(auto x:g[u])
{
  if(x!=p)dis[x]=1+dis[u],dfs(x,u);
}

}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
    int a,b;cin>>a>>b;
          g[a].push_back(b);
          g[b].push_back(a);
  }
  dfs(1,0);
  for(int i=1;i<=n;i++)cout<<dis[i]<<endl;
  int mx=max_element(dis,dis+n+1)-dis; 
  memset(dis,0,sizeof(dis));
  dfs(mx,0);
  cout<<endl<<*max_element(dis,dis+n+1)<<endl;
}
