#include<bits/stdc++.h>
using namespace std;
int n,d,i,k,m;
string s;
main(){
for(cin>>n>>d;i<d;i++){
    cin>>s;
    if(s.find('0')<101)k++;else k=0;
    m=max(k,m);
}
cout<<m;
}
