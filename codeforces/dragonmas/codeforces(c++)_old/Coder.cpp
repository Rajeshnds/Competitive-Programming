#include<bits/stdc++.h>
using namespace std;
int n,x,y;
main(){
cin>>n;
cout<<(n*n+1)/2<<endl;
for(int i=1;i<=n;i++,cout<<endl)
    for(int j=1;j<=n;j++)
cout<<((i%2==0&&j%2==0)||(i%2!=0&&j%2!=0)?'C':'.');

}
