#include<bits/stdc++.h>
using namespace std;
int n,a,x,y,t;
main(){
cin>>n;t=n;
while(n--)cin>>a,x|=a;
while(t--)cin>>a,y|=a;
cout<<x+y;
}
