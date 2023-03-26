#include<bits/stdc++.h>
using namespace std;
int t,n,m,a,b,c,d,f;
string symmetric_matrix(){
    f=0;
    cin>>n>>m;
    while(n--){cin>>a>>b>>c>>d;if(b==c)f=1;}
    if(f&&(m%2==0))return "YES";
    return "NO";
}
int main(){
    for(cin>>t;t--;)cout<<symmetric_matrix()<<endl;
}
