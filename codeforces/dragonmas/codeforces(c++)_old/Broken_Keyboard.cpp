#include<bits/stdc++.h>
using namespace std;
int t;
string c;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>c;set<char>s;
        for(int i=0;i<c.size();i++){
            if(c[i]!=c[i+1])s.insert(c[i]);
            else i++;
        }
        for(auto i:s)cout<<i;
    }
}
