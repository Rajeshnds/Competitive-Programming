#include<bits/stdc++.h>
using namespace std;
int t,n,l;
double a[100005];
void solve(){
    int i=0,j=n+1;
    double d=0,ans=0,s1=1,s2=1;
    while(i<j-1){
        if((a[i+1]-a[i])/s1<=(a[j]-a[j-1])/s2){
            d=(a[i+1]-a[i])/s1;
            ans+=d;
            a[j]-=d*s2;
            i++;
            s1++;
        }
        else{
            d=(a[j]-a[j-1])/s2;
            ans+=d;
            a[i]+=d*s1;
            j--;
            s2++;
        }
    }
    ans+=(a[j]-a[i])/(s1+s2);
    cout<<fixed<<setprecision(10)<<ans<<endl;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>l;
        fill(a,a+n+2,0);
        for(int i=1;i<=n;i++)cin>>a[i];
        a[n+1]=l;
        solve();
    }
}