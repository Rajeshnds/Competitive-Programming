#include<bits/stdc++.h>
using namespace std;
int n,k,l,j;
string s;
main(){
cin>>n>>k>>s;
sort(s.begin(),s.end());
for(int i=0;i<n&&k;i++){
    if(s[i]>=l+2)l=s[i],j+=s[i]-96,k--;
}
cout<<(k?-1:j);
}
