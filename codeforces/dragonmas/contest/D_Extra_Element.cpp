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
    int r=1;
    k=p[3].first-p[2].first;
    for(int i=3;i<=n;i++){
        if(p[i].first-p[i-1].first!=k){
            r=0;
        }
    }
    if(r){
        cout<<p[1].second;
        return;
    }
    r=1;
    k=p[3].first-p[1].first;
    for(int i=4;i<=n;i++){
        if(p[i].first-p[i-1].first!=k){
            r=0;
        }
    }
    if(r){
        cout<<p[2].second;
        return;
    }
    k=p[2].first-p[1].first;
    for(int i=2;i<=n;i++){
        if(p[i].first-p[i-1].first!=k){
            if(i==n){
                cout<<p[n].second;
                return;
            }
            if(p[i+1].first-p[i-1].first==k){
                int r=1;
                for(int j=i+2;j<=n;j++){
                    if(p[j].first-p[j-1].first!=k){
                        r=0;
                    }
                }
                if(r){
                    cout<<p[i].second;
                    return;
                }
                else{
                    cout<<-1;
                    return;
                }
            }
            else{
                cout<<-1;
                return;
            }
        }
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
    for(int i=1;i<=n;i++)cin>>p[i].first,p[i].second=i;
    sort(p+1,p+n+1);
    if(n==2||n==3){
        cout<<1;
    }
    else solve();
}