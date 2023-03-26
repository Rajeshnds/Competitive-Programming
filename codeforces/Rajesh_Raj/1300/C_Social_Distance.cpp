#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            for(int j=i;j<=min(n-1,i+k);j++)b[j]=1;
            i=i+k;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            for(int j=i;j>=max(0,i-k);j--){
                b[j]=1;
            }
            i=i-k;
        }
    }
    int seat=0;
    for(int i=0;i<n;i++){
        if(b[i]==0){
            seat++;
            i+=k;
        }
    }
    cout<<seat;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>k>>s;
        solve();
    }
}