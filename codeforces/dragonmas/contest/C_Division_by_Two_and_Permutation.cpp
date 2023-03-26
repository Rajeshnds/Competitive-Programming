#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    for(int i=n;i>=1;i--){
        int r=0;
        for(int j=1;j<=n;j++){
            if(a[j]==i&&r==0)r=1;
            else if(a[j]==i&&r==1){
                a[j]/=2;
            }
        }
        if(r==0){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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
        for(int i=1;i<=n;i++){
            cin>>x;
            while(x>n)x/=2;
            a[i]=x;
        }
        solve();
    }   
}