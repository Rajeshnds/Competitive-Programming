#include<bits/stdc++.h>
using namespace std;
int n;
string s,d;
main(){
cin>>n>>s;
for(int i=0;i<n;i++)if((n-i)%2)d+=s[i];
else d=s[i]+d;
cout<<d;
}
