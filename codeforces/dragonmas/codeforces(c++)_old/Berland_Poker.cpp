#include<bits/stdc++.h>
using namespace std;
int t,n,m,k;
main(){
for(cin>>t;t--;){
    cin>>n>>m>>k;
    cout<<(n/k>=m?m:(n/k)-(((-n/k)+k-2+m)/(k-1)));cout<<endl;
}
}
