#include<bits/stdc++.h>
using namespace std;
double n,m,a,b,d,c,mi;
main(){
cin>>n>>m>>c>>d;
mi=c/d;
while(n>1){
    cin>>a>>b;
    if(a/b<mi)mi=a/b;
    n--;
}
printf("%.81f",mi*m);
}
