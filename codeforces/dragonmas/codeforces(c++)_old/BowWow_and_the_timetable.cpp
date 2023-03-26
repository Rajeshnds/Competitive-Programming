#include<bits/stdc++.h>
using namespace std;
string s;
main(){
    cin>>s;int n=s.size();
    for(int i=1;i<s.size();i++)if(s[i]=='1'){n++;break;}
    cout<<n/2;
}
