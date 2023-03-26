#include<bits/stdc++.h>
using namespace std;
int t,a,b,c,k;
main(){
cin>>t;
while(t--){k=0;cin>>a>>b>>c;
while(b>0&&c>1){k+=3;b--;c-=2;}
while(a>0&&b>1){k+=3;a--;b-=2;}
cout<<k<<endl;
}
}
