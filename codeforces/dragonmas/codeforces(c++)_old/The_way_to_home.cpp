#include<bits/stdc++.h>
using namespace std;
int n,d,x,y;
string s;
main(){
cin>>n>>d>>s;
while(x<n-1&&y<=n){
    if(s[x]=='1')y++,x+=d;
    else x--;
}
cout<<(y>=n?-1:y);
}
