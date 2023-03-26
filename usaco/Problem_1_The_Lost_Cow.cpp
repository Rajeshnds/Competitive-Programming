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
    int ans=0,c,j=1;
    k=x;
    if(x<=y){
        while(true){
            c=k;
            k=x+j;
            if(k>=y){
                ans+=abs(y-c);
                break;
            }
            else{
                ans+=abs(k-c);
            }
            j*=(-2);
        }
    }
    else{
        while(true){
            c=k;
            k=x+j;
            if(k<=y){
                ans+=abs(y-c);
                break;
            }
            else{
                ans+=abs(k-c);
            }
            j*=(-2);
        }
    }
    cout<<ans;
}
void read_file(){
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
}
int main(){
    read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl){
    cin>>x>>y;
    solve();
}