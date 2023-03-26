#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
vector<int>v[N];
string s;
void solve(){
    int d=(n*k)/2;
    if(d%k){
        cout<<"NO"<<endl;
    }
    else{
        int e=0;
        cout<<"YES"<<endl;
        for(int i=1;i<=n*k;i+=2){
            cout<<i<<" ";
            e++;
            if(e%k==0)cout<<endl;
        }
        e=0;
        for(int i=2;i<=n*k;i+=2){
            cout<<i<<" ";
            e++;
            if(e%k==0)cout<<endl;
        }
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
        cin>>n>>k;
        solve();
    }
}