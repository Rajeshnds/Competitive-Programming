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
    for(int i=0;i<10;i++){
        if(v[i]){
            v[i]--;
            for(int j=0;j<10;j++){
                if(v[j]){
                    v[j]--;
                    if(v[(23-i-j)%10]){
                        cout<<"YES";
                        return;
                    }
                    v[j]++;
                }
            }
            v[i]++;
        }
    }
    cout<<"NO";
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
        v.assign(10,0);
        // vector<int>v(10,0);
        // for(auto i:v)cout<<i<<" ";cout<<endl;
        int k;
        for(int i=0;i<n;i++)cin>>k,v[k%10]++;
        solve();
    }
}