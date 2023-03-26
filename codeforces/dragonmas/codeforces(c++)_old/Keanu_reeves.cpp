#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
cin>>n>>s;
for(int i=0;i<n;i++)if(s[i]=='1')k++;
if(k!=n/2||n%2!=0)cout<<1<<endl<<s;
else {
    cout<<2<<endl<<s[0]<<" ";
    for(int i=1;i<n;i++)cout<<s[i];
}
}
