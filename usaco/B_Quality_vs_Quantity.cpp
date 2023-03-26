#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
ll n,m,s,x,y,k,a[N];
string t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    s=0;
    x=0;
    x=a[1];
    int i=2,j=n;
    while(i<j){
        x+=a[i];
        s+=a[j];
        if(s>x){
            cout<<"YES";
            return;
        }
        i++;j--;
    }
    cout<<"NO";
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
        s=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s+=a[i];
        }
        sort(a+1,a+n+1);
        solve();
    }   
}