#include<bits/stdc++.h>
using namespace std;
double s;
int a[200001],t,n;
void solve(){
    double k=*max_element(a+1,a+n+1);
    s-=k;
    printf("%.81f",k+s/(n-1));
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        s=0;
        for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
        solve();
    }
}