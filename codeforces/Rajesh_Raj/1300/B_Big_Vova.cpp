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
    sort(v.begin(),v.end());
    vector<int>ans;
    set<int>s;
    s.insert(n-1);
    ans.push_back(v[n-1]);
    int cur_gcd=v[n-1];
    while(true){
        if(s.size()==n)break;
        int gcd=0;
        int index=0;
        for(int j=n-2;j>=0;j--){
            if(!s.count(j)){
                int temp_gcd=__gcd(v[j],cur_gcd);
                if(temp_gcd>gcd){
                    gcd=temp_gcd;
                    index=j;
                }
            }
        }
        s.insert(index);
        ans.push_back(v[index]);
        cur_gcd=__gcd(cur_gcd,v[index]);
    }
    for(auto i:ans)cout<<i<<" ";
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
        for(int i=0;i<n;i++)cin>>v[i];
        solve();
    }
}