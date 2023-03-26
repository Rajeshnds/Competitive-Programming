#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k=0;
string s;
cin>>n>>s;
for(int i=0;i<s.size();i++)
    if(s[i]==s[i+1])
    k++;
cout<<k;
return 0;
}
