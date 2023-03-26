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
    if(a[n-1]>a[n]){
        cout<<-1<<endl;
    }
    else if(a[n]<0){
        if(!is_sorted(a+1,a+n+1)){
            cout<<-1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        cout<<n-2<<endl;
        for(int i=1;i<=n-2;i++){
            cout<<i<<" "<<n-1<<" "<<n<<endl;
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
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}