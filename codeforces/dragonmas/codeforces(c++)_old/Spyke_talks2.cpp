#include<bits/stdc++.h>
using namespace std;
int n,a,k;
map<int,int>m;
main(){
cin>>n;
while(n--){
    cin>>a;
    if(a>0)m[a]++;
    if(m[a]==2)k++;
    if(m[a]==3){cout<<-1;return 0;}
}
cout<<k;
}
