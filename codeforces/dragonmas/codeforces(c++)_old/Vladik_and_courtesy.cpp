#include<bits/stdc++.h>
using namespace std;
int a,b;
main(){
cin>>a>>b;
for(int i=1;a>=0&&b>=0;i++){
    a-=i;
    if(a<0){cout<<"Vladik";return 0;}
    i++;
    b-=i;
    if(b<0)cout<<"Valera";
}
}
