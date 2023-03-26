#include<bits/stdc++.h>
using namespace std;
int n,p[10];
char c[17];
main(){
cin>>n;
for(int i=0;i<16;i++){cin>>c[i];if(c[i]!='.')p[c[i]-48]++;}
cout<<(*max_element(p,p+10)>2*n?"NO":"YES");
}
