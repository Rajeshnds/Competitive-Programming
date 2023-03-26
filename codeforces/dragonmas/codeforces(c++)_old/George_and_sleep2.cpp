#include<bits/stdc++.h>
using namespace std;
int h,m,a,b;
char c;
main(){
cin>>h>>c>>m>>a>>c>>b;
if(m-b<0)m=60+m-b,h--;
else m=m-b;
if(h-a<0)h=24+h-a;
else h=h-a;
if(h/10>=1)cout<<h<<c;
else cout<<0<<h<<c;
if(m/10>=1)cout<<m;
else cout<<0<<m;
}

