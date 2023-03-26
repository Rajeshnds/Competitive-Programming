#include<bits/stdc++.h>
using namespace std;
int t,k;
void solve(){
    int j=1,i=0;
    while(j<=k){
        i++;
        if(i%3!=0&&i%10!=3)j++;
    }
    cout<<i;
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>k;
        solve();
    }
}