#include<bits/stdc++.h>
using namespace std;
string s;
long long j,k,i;
main(){
cin>>s;
for(i=s.size()-1;i>=0;i--){
    k=k+((s[i]-48)*pow(2,j));
    j++;
}
for(i=0;pow(4,i)<k;i++);
cout<<i;
}
