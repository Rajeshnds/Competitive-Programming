#include<iostream>
using namespace std;
int main(){
string s,t,a;
cin>>s>>t;
for(int i=s.size()-1;i>=0;i--)
    a=a+s[i];
cout<<(a==t?"YES":"NO");
return 0;
}
