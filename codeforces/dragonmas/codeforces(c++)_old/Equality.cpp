#include<bits/stdc++.h>
using namespace std;
int n,k,f[257];
string s;
main(){
cin>>n>>k>>s;
for(auto c:s)f[c]++;
cout<<*min_element(f+'A',f+'A'+k)*k;
}
