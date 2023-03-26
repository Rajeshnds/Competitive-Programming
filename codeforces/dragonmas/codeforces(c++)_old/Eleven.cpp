#include<bits/stdc++.h>
using namespace std;
int n=10,i=1,j=1,k,a[999],m,d=1;
main(){
    cin>>m;
while(n>0){
    a[k]=i;a[k+1]=j;k+=2;
    i=i+j;
    j=j+i;
    n--;
}
for(int l=1;l<=m;l++){
    if(l==a[d])cout<<"O",d++;
    else cout<<"o";
}
}
