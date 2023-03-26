#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    sort(a,a+n);
    int count1=1,count2=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[0])count1++;
        else break;
    }
    if(count1==n){
        cout<<0<<" "<<1ll*n*(n-1)/2;
        return;
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]==a[n-1])count2++;
        else break;
    }
    cout<<a[n-1]-a[0]<<" "<<1ll*count1*count2;
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
    for(int i=0;i<n;i++)cin>>a[i];
    solve();
}