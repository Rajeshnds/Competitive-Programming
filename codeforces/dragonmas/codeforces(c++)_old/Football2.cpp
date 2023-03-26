#include<bits/stdc++.h>
using namespace std;
int n,i;
string s[101];
main(){
    for(cin>>n;i<n;i++)cin>>s[i];
    sort(s,s+n);
    cout<<s[n/2];
}
