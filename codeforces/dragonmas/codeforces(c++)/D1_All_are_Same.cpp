#include<bits/stdc++.h>
using namespace std;
# define ll long long
int t,n,a[41],j;
map<int,int>m;
void solve(){
    int x=0;
    for(int i=1;i<j;i++){
        x=__gcd(x,a[i]-a[0]);
    }
    cout<<x;
}
int main(){
    int b;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        j=0;
        m.clear();
        for(int i=1;i<=n;i++){
            cin>>b;
            if(m[b]==0)a[j++]=b;
            m[b]=1;
        }
        if(j==1)cout<<-1;
        else sort(a,a+j),solve();
    }   
}