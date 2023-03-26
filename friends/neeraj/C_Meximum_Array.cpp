#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,b[N],a[N];
string s,t;
vector<vector<int>>v1;
vector<int>v2;
set<int>st;
map<int,int>mp;
void solve(){
    m=1;
    int i=1;
    v2.clear();
    while(i<=n){
        for(int j=0;j<=n+1;j++){
            if(b[j]==0){
                v2.push_back(j);
                while(i<=m){
                    b[a[i]]--;
                    // auto it=v1[a[i]].begin();
                    v1[a[i]].erase(v1[a[i]].begin());
                    i++;
                }
                m++;
                break;
            }
            m=max(m,v1[j][0]);
        }
    }
    cout<<v2.size()<<endl;
    for(auto i:v2)cout<<i<<" ";
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
        fill(b,b+n+2,0);
        v1.assign(n+1,{});
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[a[i]]++;
            v1[a[i]].push_back(i);
        }
        solve();
    }   
}