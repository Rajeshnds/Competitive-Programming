#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
    cin>>n>>s;
    for(int i=0;i<n;i++)
        if(s[i]!=s[0])return cout<<"YES"<<endl<<s[0]<<s[i],0;
        cout<<"NO";
}
