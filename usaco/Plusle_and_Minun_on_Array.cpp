#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){

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
        x=1e9;
        y=-1e9;
        ll ans=0;
        for(int i=1;i<=n;i++){
            cin>>k;
            k=abs(k);
            if(i%2==1){
                ans+=k;
                x=min(x,k);
            }
            else{
                ans-=k;
                y=max(y,k);
            }
        }
        if(n>1){
            if(ans+y-x+y-x>ans)ans=ans+y-x+y-x;
        }
        cout<<ans;
    }   
}