#include<bits/stdc++.h>
using namespace std;
int n,a,i;
main(){
cin>>n;
while(n--){
        int b=0;
    cin>>a;
    for(i=1;i<=a/2-1;i++)
        b+=pow(2,i);
    for(i=a/2;i<=a-1;i++)
        b-=pow(2,i);
        b+=pow(2,i);
cout<<b<<endl;
}
return 0;
}
