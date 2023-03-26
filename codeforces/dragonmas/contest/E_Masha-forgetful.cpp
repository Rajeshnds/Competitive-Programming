#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s[N],t;
vector<string>v1,v2;
vector<pair<int,pair<int,int>>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    int i=0;
    if(m%2==1){
        while(i<=n-3){
            v1.push_back(t.substr(i,3+i));
            i+=2;
        }
        for(int i=0;i<v1.size();i++){
            for(int j=1;j<=n;j++){
                if(s[j].find(v1[i])!=-1){
                    v.push_back({i*2,{i*2+2,j}});
                    r=i;
                    x=s[j].find(v1[i]);
                    st.insert({j,x});
                    st.insert({j,x+1});
                    st.insert({j,x+2});
                    i=v1.size();
                    break;
                }
            }
        }
        i=0;
        while(i<=n-2){
            if(i==r)i+=3;
            if(i<=n-2){
                v1.push_back(t.substr(i,2+i));
                i+=2;
            }
        }
        for(int i=0;i<v1.size();i++){
            for(int j=1;j<=n;j++)
        }
    }
    i=0;
    while(i<=n-2){
        v2.push_back(t.substr(i,2+i));
        i+=2;
    }
    for(int i=0;i<m;i++){
        for(int j=1;j<=n;j++){
            if(s[j].find());
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
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>m;
        for(int i=1;i<=n;i++)cin>>s[i];
        cin>>t;
        solve();
    }   
}