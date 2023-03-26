#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e6+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,d,c[1005],a[1005],ans[N],ans2[1005];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    for(int i=1;i<=m;i++){
        // if(a[m]-a[i-1]+(i*(d-1))<=n){
            for(int k=((d-1)*i)+1+a[i-1],j=k;j<=k+c[i]-1;j++){
                ans[j]=i;
                x=j;
            }
        // }
        // else{
        //     for(int j=i;j<=m;j++){
        //         while(c[j])ans[++x]=j,c[j]--;
        //     }
        //     break; 
        // }
    }
    if(x>n){
        y=x-n;
        int i=n;
        while(x){
            if(y&&ans[x]==0)y--,x--;
            else if(x)ans2[i--]=ans[x--];
        }
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)cout<<ans2[i]<<" ";
        return;
    }
    for(int i=max(0ll,n+1-d);i<=n;i++){
        if(ans[i]){
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
            return;
        }
    }
    cout<<"NO";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>m>>d;
    for(int i=1;i<=m;i++)cin>>c[i],a[i]=a[i-1]+c[i];
    solve();
}