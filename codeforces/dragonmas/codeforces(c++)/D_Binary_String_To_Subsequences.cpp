#include<bits/stdc++.h>
using namespace std;
int t,n;
string s;
void solve(){
    vector<vector<int>>v(2);
    vector<int>v2(n);
    int j=0;
    for(int i=0;i<n;i++){
        int d=s[i]-'0';
        if(v[d^1].empty()){
            v2[i]=++j;
        }
        else{
            v2[i]=v[d^1].back();
            v[d^1].pop_back();
        }
        v[d].push_back(v2[i]);
    }
    cout<<j<<endl;
    for(auto i:v2)cout<<i<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        solve();
    }
}