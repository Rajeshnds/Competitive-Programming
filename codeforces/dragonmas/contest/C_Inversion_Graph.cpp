#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]>i){
            k=a[i]-i;
            int r=1;
            for(int j=i+1;j<=i+k;j++){
                if(a[j]>a[i]){
                    i=j-1;
                    r=0;
                    break;
                }
            }
            if(r)ans++,i=i+k;
        }
        else{
            ans++;
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
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}