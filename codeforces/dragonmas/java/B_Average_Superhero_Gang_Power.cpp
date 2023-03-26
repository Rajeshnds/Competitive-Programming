#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
void solve(){
    sort(a+1,a+n+1);
    long double sum=0,ans=0,d=0,x=0;
    if(m>=n){
        x=m-n;
        int j=0;
        for(int i=n;i>=1;i--){
            sum+=a[i];
            j++;
            x++;
            if(x>=k){
                sum+=k;
                x-=k;
            }
            else{
                sum+=x;
                x=0;
            }
            d=sum/j;
            ans=max(ans,d);
        }
    }
    else{
        x=n-m;
        d=x;
        int j=n;
        while(x){
            sum+=a[j];
            j--;
            x--;
        }
        ans=sum/d;
        for(int i=j;i>=1;i--){
            sum+=a[i];
            d++;
            sum++;
            x=sum/d;
            ans=max(ans,x);
        }
    }
    cout<<fixed<<setprecision(10)<<ans;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    solve();
}