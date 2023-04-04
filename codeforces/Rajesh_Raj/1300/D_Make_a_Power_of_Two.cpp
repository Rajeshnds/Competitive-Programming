#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n;
vector<int>v;
vector<vector<int>>adj;
string s;
void solve(){
    vector<string>power;
    ll i=1;
    int ans=20;
    while(i<=1000000000000000009){
        power.push_back(to_string(i));
        i*=2;
    }
    for(int i=0;i<power.size();i++){
        int k=0,match=0;
        int string_size=s.size(),power_size=power[i].size();
        for(int j=0;k<s.size()&&j<power[i].size();j++,k++){
            while(k<s.size()&&s[k]!=power[i][j]){
                k++;
            }
            if(k<s.size()&&s[k]==power[i][j])match++;
        }
        ans=min(ans,string_size-match+power_size-match);
    }
    cout<<ans;
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