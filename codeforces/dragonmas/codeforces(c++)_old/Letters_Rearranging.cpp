#include<bits/stdc++.h>
using namespace std;
int t;
string s;
main(){
for(cin>>t;t--;){
    cin>>s;
    sort(s.begin(),s.end());
    cout<<(s[0]==s[s.size()-1]?"-1":s)<<endl;
}
}
