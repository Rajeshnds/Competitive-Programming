#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n;
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int a,ans;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        ans=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            ans=max(ans,a-i);
        }
        cout<<ans;
    }
}
