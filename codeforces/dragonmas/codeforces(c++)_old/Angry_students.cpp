#include<bits/stdc++.h>
using namespace std;
int t,n,j,m;
string s;
main(){
cin>>t;
while(t--){
    cin>>n>>s;j=m=0;
    while(n--){
        if(s[n]=='P')j++;
        else m=max(j,m),j=0;
    }
    cout<<m<<endl;
}
}
