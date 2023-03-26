#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>nodes;
string s,t;
vector<int>in,out;
void dfs2(int i,int p){
    int mx1=-1,mx2=-1;
    for(auto j:nodes[i]){
        if(j!=p){
            if(in[j]>=mx1){
                mx2=mx1;
                mx1=in[j];
            }
            else if(in[j]>mx2){
                mx2=in[j];
            }
        }
    }
    for(auto j:nodes[i]){
        int longest=mx1;
        if(j!=p){
            if(longest==in[j]){
                longest=mx2;
            }
            out[j]=max(out[i],longest+1)+1;
            dfs2(j,i);
        }
    }
}
void dfs1(int i,int p){
    for(auto j:nodes[i]){
        if(j!=p){
            dfs1(j,i);
            in[i]=max(in[i],in[j]+1);
        }
    }
}
void solve(){
    in.assign(n+1,0);
    out.assign(n+1,0);
    dfs1(1,-1);
    dfs2(1,-1);
    for(int i=1;i<=n;i++){
        cout<<max(in[i],out[i])<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    nodes.assign(n+1,{});
    for(int i=1;i<n;i++){
        int a,b;
        cin>>a>>b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }
    solve();
}