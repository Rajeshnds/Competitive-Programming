#include<bits/stdc++.h>
using namespace std;
int n,x,y,z,m,k,l;
main(){
    for(cin>>n;n--;)cin>>x>>y>>z,m+=x,k+=y,l+=z;
    cout<<(m||k||l?"NO":"YES");
}
