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
    vector<int>count(26,0);
    int temp=0,ans=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        count[s[i]-'a']++;
        // cout<<count[s[i]-'a']<<" ";
        if(count[s[i]-'a']%2==1){
            temp++;
        }
        else{
            count.assign(26,0);
            ans+=temp-1;
            temp=0;
        }
    }
    // cout<<endl;
    ans+=temp;
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