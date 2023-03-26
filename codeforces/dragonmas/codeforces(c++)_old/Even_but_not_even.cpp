#include<bits/stdc++.h>
using namespace std;
int t,n,k;
string s,a;
main(){
for(cin>>t;t--;cout<<endl){
    cin>>n>>s;a="";k=0;
    for(int i=0;i<n&&k<2;i++)if(s[i]%2==1)a+=s[i],k++;
    if(k<2)cout<<-1;else cout<<a;
}
}
