#include<bits/stdc++.h>
using namespace std;
int n;
string s;
main(){
cin>>n>>s;
for(int i=0;i<n;i++)if(s[i]=='0')n=i+1;
cout<<n;
}
