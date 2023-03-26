#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,a[N];
ll toal_sum=0;
ll calc(int j,int k){
    ll max_sum=-inf,temp=0;
    for(int i=j;i<k;i++){
        temp+=a[i];
        if(temp>max_sum)max_sum=temp;
        if(temp<0)temp=0;
    }
    return max_sum;
}
void solve(){
    ll max_sum=calc(0,n-1);
    if(max_sum>=toal_sum){
        cout<<"NO";
        return;
    }
    max_sum=calc(1,n);
    cout<<(max_sum>=toal_sum?"NO":"YES");
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        toal_sum=0;
        for(int i=0;i<n;i++)cin>>a[i],toal_sum+=a[i];
        solve();
    }
}