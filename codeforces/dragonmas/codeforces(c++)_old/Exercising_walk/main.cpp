#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,d,x,y,k,l,m,n;
string walk(){
    cin>>a>>b>>c>>d>>x>>y>>k>>l>>m>>n;
    x+=b-a;y+=d-c;
    return x>=k&&x<=m&&y>=l&&y<=n&&(m>k||a+b==0)&&(n>l||c+d==0)
            ?"YES":"NO";
}
int main(){
    for(cin>>t;t--;)cout<<walk()<<endl;
}
