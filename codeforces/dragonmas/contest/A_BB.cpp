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
void solve(){
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'){
            s.replace(i,1,"BB");
            i++;
        }
    }
    string u="A";
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'&&s[i+1]=='B'){
            s.replace(i,2,u);
        }
    }
    cout<<s;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n>>s;
    solve();
}