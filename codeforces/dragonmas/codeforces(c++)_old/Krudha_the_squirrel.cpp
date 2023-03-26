#include<bits/stdc++.h>
using namespace std;
int n,k,l,m;
string s;
main(){
    cin>>n>>k>>s;
    for(int i=0;i<n;i++){if(s[i]=='#')l++,m=max(m,l);else l=0;}
    cout<<(m>=k?"NO":"YES");
}
