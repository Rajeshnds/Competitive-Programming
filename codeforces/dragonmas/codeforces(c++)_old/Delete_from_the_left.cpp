#include<bits/stdc++.h>
using namespace std;
string s,t;
int i,j,a,b;
main(){
    cin>>s>>t;
i=s.size();j=t.size();
for(a=i-1,b=j-1;i>=0,j>=0&&s[i]==t[j];i--,j--);cout<<i+j+2;
}
