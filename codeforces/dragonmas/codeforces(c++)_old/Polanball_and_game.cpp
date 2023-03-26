#include<bits/stdc++.h>
using namespace std;
int n,m,c;
set<string> s;
string t;
main(){
cin>>n>>m;
c=n+m;
while(c--){
    cin>>t;
    s.insert(t);
}
if((n+m-s.size())%2==1)n++;
cout<<(n>m?"YES":"NO");
}
