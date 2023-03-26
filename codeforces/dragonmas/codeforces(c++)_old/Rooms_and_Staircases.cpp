#include<bits/stdc++.h>
using namespace std;
int t,n,k;
string s;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;k=n;
        for(int i=1;i<=n;i++)if(s[i-1]=='1')k=max(k,max(2*i,(n-i+1)*2));
        cout<<k;
        }
}
