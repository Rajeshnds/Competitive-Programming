#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    set<ll>s;
    for(int i=2;i<=1000000;i++){
        int count=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                count=1;
                break;
            }
        }
        if(!count)s.insert(1ll*i*i);
    }
    ll num;
    for(int i=1;i<=n;i++){
        cin>>num;
        if(s.count(num)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
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
    solve();
}