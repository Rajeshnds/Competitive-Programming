#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a,b,c;
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    int r=0;
    k=c-b;
    k=b-k;
    if(k>0&&k%a==0)r=1;
    if((a+c)%2==0){
        k=(a+c)/2;
        if(k%b==0)r=1;
    }
    k=a-b;
    k=b-k;
    if(k>0&&k%c==0)r=1;
    cout<<(r?"YES":"NO");
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>a>>b>>c;
        solve();
    }   
}