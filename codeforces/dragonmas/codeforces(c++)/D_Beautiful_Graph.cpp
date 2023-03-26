#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=3e5+5,mod=998244353;
int t,n,m,b[N],f,a,c;
ll p[N];
vector<vector<int>>v;
void bfs(int i){
    queue<int>q;
    q.push(i);
    b[i]=1;
    a=1;
    c=0;
    f=1;
    while(!q.empty()){
        int k=q.front();
        q.pop();
        for(auto j:v[k]){
            if(b[j]==0){
                b[j]=b[k]*(-1);
                q.push(j);
                if(b[j]==1)a++;
                else c++;
            }
            else if(b[j]==b[k]){f=0;return;}
        }
    }
}
void solve(){
    ll ans=1;
    fill(b,b+n+1,0);
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            bfs(i);
            if(f==0){
                cout<<0;
                return;
            }
            ll d=(p[a]+p[c])%mod;
            ans=ans*d%mod;
        }
    }
    cout<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    p[0]=1;
    for(int i=1;i<N;i++){
        p[i]=p[i-1]*2%mod;
    }
    int a,b;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        v.assign(n+1,{});
        for(int i=1;i<=m;i++){
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        solve();
    }
}