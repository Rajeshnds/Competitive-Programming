#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n;
vector<vector<int>>v;
string s;
void solve(){
    string t=s;
    v.assign(1001,{});
    sort(t.begin(),t.end());
    int ans=0;
    while(s!=t){
        ans++;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]=='1'){
                while(i<j&&s[j]=='1')j--;
                if(i<j){
                    v[ans].push_back(i+1);
                    v[ans].push_back(j+1);
                    swap(s[i],s[j]);
                }
            }
            else i++;
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=ans;i++,cout<<endl){
        cout<<v[i].size()<<" ";
        sort(v[i].begin(),v[i].end());
        for(auto j:v[i])cout<<j<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;){
        cin>>n>>s;
        solve();
    }
}