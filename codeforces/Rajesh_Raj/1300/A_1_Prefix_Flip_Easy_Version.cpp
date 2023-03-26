#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n;
string s,t;
void solve(){
    if(s==t){
        cout<<0;
        return;
    }
    vector<int>mark;
    for(int i=0;i<n;){
        int k=i;
        while(i<n&&s[i]==s[k])i++;
        mark.push_back(i);
    }
    int count=mark.size();
    // cout<<count<<" ";
    if(s[0]=='0'&&count%2==0)mark.push_back(n);
    if(s[0]=='1'&&count%2==1)mark.push_back(n);
    // cout<<mark.size()<<endl;
    int i=n-1;
    while(i>=0&&t[i]=='1')i--;
    for(int j=i;j>=0;){
        mark.push_back(j+1);
        int k=j;
        while(j>=0&&t[j]==t[k])j--;
    }
    cout<<mark.size()<<" ";
    for(auto i:mark)cout<<i<<" ";
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>s>>t;
        solve();
    }
}