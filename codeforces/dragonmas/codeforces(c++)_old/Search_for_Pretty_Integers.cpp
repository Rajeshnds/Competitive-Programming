#include<bits/stdc++.h>
using namespace std;
int n,k,m=9,f=9,a,e=9,d,b[10]={0};
main(){
    cin>>n>>d;
while(n--)cin>>a,e=min(e,a),b[a]++;
while(d--)cin>>a,f=min(f,a),b[a]++;
for(int i=1;i<=9;i++)if(b[i]==2)return cout<<i,0;
cout<<min(e,f)<<max(e,f);
}
