#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
void solve(){
    for(int i=(n+1)/2;i<n;){
        while(i<n&&a[i]==a[n/2])i++;
        ll l=a[i]-a[n/2];
        ll m=i-(n/2);
        if(i<n){
            if(k>l*m){
                k-=(l*m);
                a[n/2]=a[i];
            }
            else{
                a[n/2]+=(k/m);
                k=0;
                break;
            }
        }
        else{
            a[n/2]+=(k/m);
        }
    }
    cout<<a[n/2];
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(n==1)cout<<a[0]+k;
    else solve();
}