#include<bits/stdc++.h>
using namespace std;
int n,k,p[101],q[101];
string s;
main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<n;j++)
        if(s[j]=='C'){k+=p[i]+q[j];p[i]++;q[j]++;}
}
cout<<k;
}
