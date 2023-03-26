#include<bits/stdc++.h>
using namespace std;
int b[101],a,s,c,d,m;
main(){
for(int i=1;i<=5;i++){
    cin>>a;
    s+=a;
    b[a]++;
    if(b[a]==2)c=2*a;
    if(b[a]==3)d=3*a;
    m=max(m,max(c,d));
}
cout<<s-m;
}
