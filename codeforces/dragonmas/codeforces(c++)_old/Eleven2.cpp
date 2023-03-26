#include<bits/stdc++.h>
using namespace std;
int n,i,j;
main(){
    cin>>n;
    string s(n,'o');
for(i=1,j=1;i<=n;i+=j,j=i-j)
    s[i-1]='O';
cout<<s;
}
