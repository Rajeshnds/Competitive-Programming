#include<bits/stdc++.h>
using namespace std;
int c1,c2,c3,c4,n,m,a,s,t;
int min_burles(){
    cin>>c1>>c2>>c3>>c4>>n>>m;
    while(n--)cin>>a,s+=min(a*c1,c2);s=min(s,c3);
    while(m--)cin>>a,t+=min(a*c1,c2);t=min(t,c3);
    return min(s+t,c4);
}
int main(){
    cout<<min_burles();
}
