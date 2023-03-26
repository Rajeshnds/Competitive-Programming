#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],l;
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    if(l<2){
        cout<<-1;
    }
    else if(k==0&&l%2==1){
        cout<<-1;
    }
    else if(l%2==0){
        for(int i=1;i<=n;i++){
            if(a[i]%2==1){
                cout<<a[i]<<" ";
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i]%2==0){
                cout<<a[i]<<" ";
            }
        }
    }
    else{
        v.clear();
        for(int i=1;i<=n;i++){
            if(a[i]%2==1)v.push_back(a[i]);
        }
        cout<<v[0]<<" "<<v[1]<<" ";
        for(int i=1;i<=n;i++){
            if(a[i]%2==0)cout<<a[i]<<" ";
        }
        for(int i=2;i<v.size();i++)cout<<v[i]<<" ";
    }
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
        k=0;
        l=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]%2==0)k++;
            else l++;
        }
        solve();
    }
}