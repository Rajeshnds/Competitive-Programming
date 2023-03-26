#include<bits/stdc++.h>
using namespace std;
string s,t;
main(){
    cin>>s;t=s;
    if(s[0]<96)s[0]+=32;else s[0]-=32;
    for(int i=1;i<s.size();i++){
        if(s[i]<96)s[i]+=32;
        else return cout<<t,0;
    }
    cout<<s;
}
