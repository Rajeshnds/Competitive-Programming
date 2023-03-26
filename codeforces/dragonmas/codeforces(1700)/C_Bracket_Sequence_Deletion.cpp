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
    int d=-1,ans=0,k=0,e=0,r=0,f=0;
    for(int i=0;i<n;i++){
        if(e==0&&r==0&&s[i]=='('){
            e=1;
        }
        if(s[i]==')'&&e==0&&r==0){
            r=1;
            f=0;
        }
        if(r){
            if(s[i]==')')f++;
            if(f==2){
                ans++;
                k=0;
                r=0;
                e=0;
                d=i;
            }
        }
        else{
            if(s[i]==')')k--;
            else if(s[i]=='(')k++;
            if(k==2||k==0){
                ans++;
                k=0;
                r=0;
                e=0;
                d=i;
            }
        }
    }
    cout<<ans<<" "<<n-d-1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}