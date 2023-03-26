#include<bits/stdc++.h>
using namespace std;
int n;
string s;
main(){
cin>>n>>s;
sort(s.begin(),s.end());
for(int i=0;i<n-1;i++)if(s[i]==s[i+1]){cout<<"Yes";return 0;}
cout<<(n==1?"Yes":"No");
}
