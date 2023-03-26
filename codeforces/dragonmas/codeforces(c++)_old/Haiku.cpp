#include<bits/stdc++.h>
using namespace std;
string v="aeiou",s;
int a[3]={5,12,17},k;
main(){
for(int i=0;i<3;i++){
    getline(cin,s);
    for(char c:s)for(char cc:v)k+=(c==cc);
    if(k!=a[i]){cout<<"NO";return 0;}
}
cout<<"YES";
}
