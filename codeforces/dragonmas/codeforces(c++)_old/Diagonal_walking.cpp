#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
cin>>n>>s;
for(int i=1;i<n;i++)if(s[i]!=s[i-1])i++,k++;
cout<<n-k;
}
