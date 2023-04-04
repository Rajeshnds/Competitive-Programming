#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n;
vector<int>v,lok;
vector<vector<int>>adj;
string s;
void solve(){
    vector<int>unlock;
    for(int i=0;i<n;i++){
        if(lok[i]==0){
            unlock.push_back(v[i]);
        }
    }
    sort(unlock.begin(),unlock.end());
    // int j=0;
    int last=unlock.size()-1;
    for(int i=0;i<n;i++){
        if(lok[i]==0){
            // if(unlock[j]<0){
            //     v[i]=unlock[j++];
            // }
            // else{
                v[i]=unlock[last--];
            // }
        }
    }
    for(auto i:v)cout<<i<<" ";
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
        v.assign(n,0);
        lok.assign(n,0);
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++)cin>>lok[i];
        solve();
    }
}