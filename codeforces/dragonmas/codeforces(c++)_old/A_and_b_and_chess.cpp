#include<bits/stdc++.h>
using namespace std;
int a,s[125];
char c;
main(){
s['Q']=9;s['q']=-9;
s['R']=5;s['r']=-5;
s['B']=s['K']=3;s['b']=s['k']=-3;
s['P']=1;s['p']=-1;
for(int i=0;i<64;i++)cin>>c,a+=s[c];
cout<<(a>0?"White":a==0?"Draw":"Black");
}
