#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,q,sum,a[N],b[N];
// vector<vector<int>>child;
int child[N][30];
string s,t;
int jump(int a,int b){
    for(int i=0;i<30;i++){
        if(b&(1<<i)){
            a=child[a][i];
        }
    }
    return a;
}
void solve(){
    for(int d=1;d<30;d++){
        for(int i=1;i<=n;i++){
            child[i][d]=child[child[i][d-1]][d-1];
        }
    }
    for(int i=1;i<=q;i++){
        int a,b;
        cin>>a>>b;
        cout<<jump(a,b)<<endl;
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
    cin>>n>>q;
    // child.assign(n+1,vector<int>(30,0));
    for(int i=1;i<=n;i++){
        cin>>child[i][0];
    }
    solve();
}

