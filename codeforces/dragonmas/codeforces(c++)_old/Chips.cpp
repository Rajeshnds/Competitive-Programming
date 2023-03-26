#include<bits/stdc++.h>
using namespace std;
int n,m;
main(){
cin>>n>>m;
while(m>=0){
for(int i=1;i<=n;i++)if(m-i>=0)m-=i;else {cout<<m;return 0;}
}
}
