#include<bits/stdc++.h>
using namespace std;
string s,t,c;
main(){
cin>>s>>t>>c;
s+=t;
sort(s.begin(),s.end());
sort(c.begin(),c.end());
cout<<(s==c?"YES":"NO");
return 0;
}
