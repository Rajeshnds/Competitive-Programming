#include<bits/stdc++.h>
using namespace std;
int t,n,b[8001],a[8001];
void solve(){
    int k=0;
    for(int i=0;i<n-1;i++){
        int d=b[i];
        for(int j=i+1;j<n;j++){
            d+=b[j];
            if(d>n)break;
            else k+=a[d],a[d]=0;
        }
    }
    cout<<k<<endl;
}
int main(){
    for(cin>>t;t--;){
        fill(a,a+n+1,0);
        cin>>n;
        for(int i=0;i<n;i++)cin>>b[i],a[b[i]]++;
        solve();
    }
}