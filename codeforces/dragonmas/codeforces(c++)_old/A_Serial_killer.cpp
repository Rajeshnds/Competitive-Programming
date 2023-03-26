#include<bits/stdc++.h>
using namespace std;
string s,t,a,b;
int n;
main(){
cin>>s>>t>>n;
while(n--){
    cin>>a>>b;
    cout<<a<<" ";
    if(a==s)cout<<t<<endl,s=b;else cout<<s<<endl,t=b;

}
cout<<s<<" "<<t;
}
