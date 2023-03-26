#include<bits/stdc++.h>
using namespace std;
int n,m,j=-1,i=-1,k;
string s;
main(){
cin>>n>>m;
while(j<0){cin>>s;j=s.find('B');i++;}
k=(s.rfind('B')-s.find('B'))/2+1;
cout<<i+k<<" "<<j+k;
}
