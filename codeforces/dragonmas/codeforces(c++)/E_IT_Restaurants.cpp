#include <bits/stdc++.h>
using namespace std;

bitset<6000> tmp, ans;
int n;
vector<int> g[6005];
int dfs(int u,int p)
{
  int c=1;
  for(auto x:g[u])if(x!=p)c+=dfs(x,u);
  return c;
}

int main()
{
  cin>>n;
  for(int i=0;i<n-1;i++)
  {
    int a,b;cin>>a>>b;
    g[a-1].push_back(b-1);
    g[b-1].push_back(a-1);
  }

  for(int i=0;i<n;i++)
  {
    tmp=1;
    for(auto x:g[i])
    {
      tmp|=(tmp<<dfs(x,i));
    }
    ans|=tmp;
  }
  cout<<ans.count()-ans[0]-ans[n-1]<<endl;
  for(int i=1;i<n-1;i++)if(ans[i])cout<<i<<" "<<n-1-i<<endl;
}
