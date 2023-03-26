#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
# define ld long double
const int N=2e5+5,mod=1e9+7;
const ll inf=1e18;
ll _T;
ll n,m,x,y,k,a[N],b[N];
ll ans=0,sum=0;
ld ansd=0,sumd=0;
string s,t;
vector<ll>v;
vector<vector<ll>>vv;
vector<pair<ll,ll>>vp;
pair<ll,ll>p[N];
priority_queue<ll>pq;
queue<ll>q;
set<char>st;
set<pair<ll,ll>>stp;
set<vector<ll>>stv;
map<ll,ll>mll;
map<ll,vector<ll>>mlv;
map<ll,pair<ll,ll>>mlp;
map<pair<ll,ll>,ll>mpl;
map<ll,map<ll,ll>>mm;
void solve(){
    int ans=0;
    st.clear();
    for(int i=0;i<s.size();i++){
        if(i==s.size()-1){
            if(st.count(s[i])){
                ans+=st.size()-1;
                st.clear();
            }
            else st.insert(s[i]);
            break;
        }
        if(s[i]!=s[i+1]){
            if(st.count(s[i])){
                ans+=st.size()-1;
                st.clear();
            }
            else{
                st.insert(s[i]);
            }
        }
        else{
            if(st.count(s[i])){
                ans+=st.size()-1;
                st.clear();
            }
            else{
                ans+=st.size();
                st.clear();
                i++;
            }
            // ans+=st.size();
            // st.clear();
            // i++;
        }
    }
    cout<<ans+st.size();
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