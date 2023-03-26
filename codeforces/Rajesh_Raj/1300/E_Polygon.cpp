#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s[51],t;
void solve(){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(s[i][j]=='1'){
                if(s[i][j+1]=='1'||s[i+1][j]=='1')continue;
                else{
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    cout<<"YES";
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
        for(int i=0;i<n;i++)cin>>s[i];
        solve();
    }
}