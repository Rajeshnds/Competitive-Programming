#include<bits/stdc++.h>
using namespace std;
string s,t;
main(){
cin>>s;
t=s;
reverse(s.begin(),s.end());
cout<<t+s;
}
