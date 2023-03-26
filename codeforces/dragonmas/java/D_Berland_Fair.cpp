#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,p,ans,sum,a[N],b[N],mi=mod;
vector<vector<ll>>v;
string s,t;
void solve(){   
    ans=n*(p/sum);
    p=p%sum;
    int t=n;
    while(p>=mi){
        // int k=upper_bound(a,a+n+1,p)-a;
        // sum-=a[k];
        // ans+=k-1;
        // a[k]=0;
        for(int i=1;i<=n;i++){
            if(a[i]>0){
                if(p>=a[i]){
                    ans++;
                    p-=a[i];
                }
                else{
                    sum-=a[i];
                    a[i]=0;
                    t--;
                }
            }
        }
        if(p>=sum){
            ans+=(t*(p/sum));
            p%=sum;
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>p;
    for(int i=1;i<=n;i++)cin>>a[i],sum+=a[i],mi=min(mi,a[i]);
    solve();
}