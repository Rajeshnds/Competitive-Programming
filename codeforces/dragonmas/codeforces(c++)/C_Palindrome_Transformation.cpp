#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int n,k,a[N],p;
string s,t="abcdefghijklmnopqrstuvwxyz";
vector<int>v;
set<int>st;
void solve(){
    if(p>(n+1)/2){
        reverse(s.begin(),s.end());
        p=n-p+1;
    }
    int m=0,e=0,l=-1,r=-1;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            e=abs((int)t.find(s[i])-(int)t.find(s[n-i-1]));
            m+=min(e,26-e);
            if(l==-1)l=i;
            r=i;
        }
    }
    if(l==-1&&r==-1){
        cout<<0;
        return;
    }
    else if(r==-1){
        m+=abs(l+1-p);
    }
    else{
        m+=min(abs(r+1-p),abs(l+1-p))+abs(r-l);
    }
    cout<<m;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n>>p>>s;
    solve();
}