#include<bits/stdc++.h>
using namespace std;
string s,t,a,b;
int n;
main(){
cin>>s>>t>>n;
do{
    cout<<s<<" "<<t<<endl;
    cin>>a>>b;
    a==s?s=b:t=b;
}
while(n--);
}
