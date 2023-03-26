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
    for(int i=1)
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        for(int j=2;j*j<=k;j++){
            if(k%j==0){
                a[j]++;
                while(k%j==0)k/=j;
            }
        }
        if(k>1)a[k]++;
    }
    for(int i=1;i<=1e7;i++)
    solve();
}