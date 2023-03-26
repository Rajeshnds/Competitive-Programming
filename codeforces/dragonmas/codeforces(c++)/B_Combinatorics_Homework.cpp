#include<bits/stdc++.h>
using namespace std;
int t,a[3],m;
void solve(){   
    int k=1;
    if(m>a[0]-1+a[1]-1+a[2]-1)k=0;
    else if(a[2]>a[0]+a[1]+1){
        if(m<a[2]-a[0]-a[1]-1)k=0;
    }
    cout<<(k?"YES":"NO");
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>a[0]>>a[1]>>a[2]>>m;
        sort(a,a+3);
        solve();
    }
}