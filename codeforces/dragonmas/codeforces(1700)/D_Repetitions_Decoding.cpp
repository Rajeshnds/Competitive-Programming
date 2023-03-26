#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll t,n,m,x,y,k,a[N];
string s;
vector<ll>v,part,temp;
set<ll>st;
map<ll,ll>mp;
vector<pair<ll,ll>>op;
void solve(){
    x=0;
    op.clear();
    part.clear();
    temp.clear();
    for(auto i:mp){
        if(i.second%2){
            cout<<-1;
            return;
        }
    }
    while(v.size()){
        for(int i=1;i<v.size();i++){
            if(v[i]==v[0]){
                k=i;
                break;
            }
        }
        part.push_back(k);
        for(int i=1;i<k;i++){
            temp.push_back(v[i]);
            op.push_back({x+k+i,v[i]});
        }
        x+=(2*k);
        reverse(temp.begin(),temp.end());
        for(int i=k+1;i<v.size();i++)temp.push_back(v[i]);
        v.clear();
        v=temp;
        temp.clear();
    }
    cout<<op.size()<<endl;
    for(auto i:op){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<part.size()<<endl;
    for(auto i:part){
        cout<<i*2<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        v.resize(n);
        mp.clear();
        for(auto &it:v)cin>>it,mp[it]++;
        solve();
    }
}