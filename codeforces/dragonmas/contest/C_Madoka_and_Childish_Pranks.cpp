#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s[N],t;
vector<pair<ll,ll>>v1,v2;
set<pair<int,pair<int,pair<int,int>>>>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
void solve(){
    v1.clear();
    v2.clear();
    for(int i=0;i<n;i++){
        for(int j=m-1;j>0;j--){
            if(s[i][j]=='1'){
                v1.push_back({i+1,j});
                v2.push_back({i+1,j+1});
            }
        }
    }
    for(int i=n-1;i>0;i--){
        if(s[i][0]=='1'){
            v1.push_back({i,1});
            v2.push_back({i+1,1});
        }
    }
    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i].first<<" "<<v1[i].second<<" "<<v2[i].first<<" "<<v2[i].second<<endl;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;){
        cin>>n>>m;
        for(int i=0;i<n;i++)cin>>s[i];
        if(s[0][0]=='1'){
            cout<<-1<<endl;
        }
        else{
            solve();
        }
    }   
}