#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
main(){
cin>>n>>m;
while(n--){
    cin>>a;
    if(a+m<=5) b++;
}
cout<<b/3;
return 0;
}
