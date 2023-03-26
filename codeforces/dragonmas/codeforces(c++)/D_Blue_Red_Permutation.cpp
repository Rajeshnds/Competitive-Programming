#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
const int N=2e5+5;
int t,n,a[N],j,k,b[N],c[N];
string s;
void solve(){
    for(int i=0;i<j;i++){
        if(b[i]<i+1){
            cout<<"NO";
            return;
        }
    }
    for(int i=k-1;i>=0;i--){
        if(c[i]>n){
            cout<<"NO";
            return;
        }
        n--;
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
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        j=0;k=0;
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='B')b[j++]=a[i];
            else c[k++]=a[i];
        }
        sort(b,b+j);
        sort(c,c+k);
        solve();
    }
}
