#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N],l;
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    int j=29;
    int ans=0;
    for(int i=0;i<30;i++){   
        if(a[i]>0){
            ans+=(1<<j);
        }
        j--;
    }
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
        cin>>n>>l;
        fill(a,a+31,0);
        for(int i=0;i<n;i++){
            cin>>k;
            bitset<30>b(k);
            s=b.to_string();
            for(int i=0;i<30;i++){
                if(s[i]=='0')a[i]--;
                else a[i]++;
            }
        }
        solve();
    }   
}