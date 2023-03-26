#include<bits/stdc++.h>
using namespace std;
long long n,x,y;
main(){
cin>>n>>x>>y;
cout<<(max(x-1,y-1)>max(n-x,n-y)?"Black":"White");
}
