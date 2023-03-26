#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    int i=n;
    while(a[i]==a[n])i--;
    cout<<(i/(a[n]-1)-1);
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
        fill(a,a+n+1,0);
        for(int i=0;i<n;i++)cin>>k,a[k]++;
        sort(a,a+n+1);
        solve();
    }
}