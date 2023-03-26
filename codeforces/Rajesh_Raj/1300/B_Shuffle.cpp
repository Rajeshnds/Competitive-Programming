#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,one,op;
void solve(){
    int l,r;
    int min_index=one,max_index=one;
    for(int i=1;i<=op;i++){
        cin>>l>>r;
        if((l<=min_index&&r>=max_index)||(l<=min_index&&r>=min_index)||(l<=max_index&&r>=max_index)){
            min_index=min(min_index,l);
            max_index=max(max_index,r);
        }
    }
    cout<<max_index-min_index+1;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n>>one>>op;
        solve();
    }
}