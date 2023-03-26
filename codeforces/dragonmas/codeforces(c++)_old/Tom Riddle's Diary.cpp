#include<bits/stdc++.h>
using namespace std;
int n,j;
string t;
set<string> s;
main(){
for(cin>>n;n--;){
    cin>>t;
    s.insert(t);j++;
    if(j==s.size())cout<<"NO"<<endl;
    else cout<<"YES"<<endl,j--;
}
}
