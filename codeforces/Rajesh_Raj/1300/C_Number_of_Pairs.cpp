#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
int l,r;
vector<ll>v;
string s,t;
void solve(){
    ll ans=0;
    sort(a,a+n);
    // for(int i=1;i<n;i++){
    //     if(a[i]>=r){
    //         continue;
    //     }
    //     if(a[i]<l){
    //         int min_value=l-a[i];
    //         if(min_value>a[i])continue;
    //         int max_value=r-a[i];
    //         if(max_value>a[i])max_value=a[i];
    //         int upper_index=upper_bound(a,a+i+1,max_value)-a;
    //         if(upper_index>i)upper_index=i;
    //         int lower_index=lower_bound(a,a+i+1,min_value)-a;
    //         ans+=upper_index-lower_index;
    //     }
    //     else{
    //         int value=r-a[i];
    //         int index=upper_bound(a,a+i+1,value)-a;
    //         if(index>i)index=i;
    //         ans+=index;
    //     }
    // }

    for(int i=0;i<n;i++){
        int upper=upper_bound(a,a+i+1,r-a[i])-a;
        if(upper>i)upper=i;
        int lower=lower_bound(a,a+i+1,l-a[i])-a;
        if(lower>i)lower=i;
        ans+=upper-lower;
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>l>>r;
        for(int i=0;i<n;i++)cin>>a[i];
        solve();
    }
}