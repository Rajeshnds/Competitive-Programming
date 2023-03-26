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
    k=s.size();
    if((s[k-1]-'0')%2==0){
        // while(s[k-1]=='0')k--;
        for(int i=0;i<k-1;i++){
            if((s[i]-'0')%2==0){
                cout<<"YES";
                return;
            }
        }
        cout<<"NO";
    }
    else{
        for(int i=0;i<k-1;i++){
            if((s[i]-'0')%2==1){
                cout<<"YES";
                return;
            }
        }
        cout<<"NO";
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
        cin>>s;
        solve();
    }
}