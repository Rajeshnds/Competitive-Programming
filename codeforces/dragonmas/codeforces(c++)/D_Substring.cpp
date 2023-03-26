#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e5+5,mod=1e9+7;
int t,n,m,dp[N][26],a[N];
// char s[N];
string s;
queue<int>q;
vector<vector<int>>v;

void solve(){
    int cnt=q.size(),m=0;
    while(!q.empty()){
        int e=q.front();
        q.pop();
        for(auto j:v[e]){
            for(int i=0;i<26;i++){
                dp[j][i]=max(dp[j][i],dp[e][i]+(s[j-1]-'a'==i));
                m=max(m,dp[j][i]);
            }
            a[j]--;
            if(a[j]==0)q.push(j),cnt++;
        }
    }
    if(cnt==n){
        cout<<m;
    }
    else cout<<-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int x,y;
    cin>>n>>m>>s;
    // scanf("%d%d%s",n,m,s+1);
    v.assign(n+1,{});
    for(int i=0;i<m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        a[y]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0)q.push(i),dp[i][s[i-1]-'a']=1;
    }
    solve();
}

