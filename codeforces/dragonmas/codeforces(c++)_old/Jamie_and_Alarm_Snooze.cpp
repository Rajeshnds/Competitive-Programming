#include<bits/stdc++.h>
using namespace std;
int x,h,m,k;
main(){
cin>>x>>h>>m;
while(h%10!=7&&m%10!=7){
    if(m-x>=0)m-=x;
    else h--,m+=60-x;
    if(h==-1)h=23;
    k++;
}
cout<<k;
}
