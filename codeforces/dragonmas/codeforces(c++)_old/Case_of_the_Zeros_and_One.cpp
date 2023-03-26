#include<bits/stdc++.h>
using namespace std;
string s;
int n,k;
main(){
cin>>n>>s;
while(n--){
    s[n]=='1'?k++:k--;
}
cout<<abs(k);
}
