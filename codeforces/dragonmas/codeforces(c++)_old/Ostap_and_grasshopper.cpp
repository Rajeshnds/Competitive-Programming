#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
main(){
cin>>n>>k>>s;
int m=s.find('G'),p=s.find('T');
if(m>p)swap(s[m],s[p]),swap(m,p);
for(int i=m+k;i<=p;i+=k){
    if(s[i]=='T'){cout<<"YES";return 0;}
    else if(s[i]=='#'){cout<<"NO";return 0;}
}
cout<<"NO";
}
