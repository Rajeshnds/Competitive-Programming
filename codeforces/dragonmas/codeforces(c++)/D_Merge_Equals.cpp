#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n;
ll a[150001];
map<ll,ll>m;
void solve(){
    int k=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        while(m[a[i]]){
            k++;
            a[m[a[i]]]=0;
            m[a[i]]=0;
            a[i]+=a[i];
        }            
        m[a[i]]=i;
    }
    cout<<n-k<<endl;
    for(int i=1;i<=n;i++)if(a[i])cout<<a[i]<<" ";
}
int main(){
    cin>>n;
    solve();
}