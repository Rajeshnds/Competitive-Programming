#include<bits/stdc++.h>
using namespace std;
string s;
main(){
cin>>s;
for(int i=2;i<s.size();i++)
    if(s[i]*s[i-1]*s[i-2]==287430)return cout<<"Yes",0;
cout<<"No";
}
