#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N],b[N],c[N][2];
string s,t;
vector<ll>v;
set<int>st;
map<pair<ll,char>,ll>mp;
map<ll,ll>ma1,ma2;
pair<ll,ll>p[N];
void solve(){
    for(int i=0;i<n;i++){
        k=a[i];
        if(!st.count(k))ma2[k]=1e9;
        st.insert(k);
        if(s[i]=='L')ma1[k]=max(ma1[k],b[i]);
        if(s[i]=='R')ma2[k]=min(ma2[k],b[i]);
        mp[{k,s[i]}]=1;
        if(mp[{k,'R'}]&&mp[{k,'L'}]){
            if(ma2[k]<ma1[k]){
                cout<<"Yes";
                return;
            }
        }
    }
    cout<<"No";
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
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a[i]=y;
        b[i]=x;
    }   
    cin>>s;
    solve();
}