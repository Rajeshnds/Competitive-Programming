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

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int a,b;
    for(cin>>t;t--;cout<<endl){
        cin>>a>>b;
        int ans=1e9;
        for(int i=0;i<=b;i++){
            if((i|b)==b){
                ans=min(ans,abs(i-a)+(i!=b));
            }
        }
        cout<<ans;
    }
}