#include<bits/stdc++.h>
using namespace std;
int n,m,i=1;
main(){
cin>>n>>m;
while((n*i)%10!=0&&((n*i)-m)%10!=0)
        i++;
cout<<i;
}
