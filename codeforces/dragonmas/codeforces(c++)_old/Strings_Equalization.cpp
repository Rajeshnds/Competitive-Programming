#include<bits/stdc++.h>
using namespace std;
int q,k;
string s,t;
main(){
    for(cin>>q;q--;cout<<endl){
        cin>>s>>t;k=0;
        for(int i=0;i<s.size();i++)if(t.find(s[i])!=-1){k=1;break;}
        cout<<(k?"YES":"NO");
    }
}
