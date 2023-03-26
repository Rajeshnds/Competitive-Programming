#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,a[100005];
void solve(){
    if(n%2==0){
        for(int i=1;i<=n;i+=2){
            cout<<a[i+1]<<" "<<-a[i]<<" ";
        }
    }
    else{
        for(int i=1;i<=n-3;i+=2){
            cout<<a[i+1]<<" "<<-a[i]<<" ";
        }
        if(a[n-2]+a[n-1]!=0){
            cout<<-a[n]<<" "<<-a[n]<<" "<<a[n-2]+a[n-1];
        }
        else if(a[n-1]+a[n]!=0){
            cout<<a[n-1]+a[n]<<" "<<-a[n-2]<<" "<<-a[n-2];
        }
        else{
            cout<<-a[n-1]<<" "<<a[n]+a[n-2]<<" "<<-a[n-1];
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
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        solve();
    }
}
