#include<bits/stdc++.h>
using namespace std;
int t,n;
string s,d;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;d="YES";
        for(int i=0;i<s.size();i++)
            if(abs(s[i]-s[n-i-1])!=2&&abs(s[i]-s[n-i-1])!=0)d="NO";
        cout<<d;
    }
}
