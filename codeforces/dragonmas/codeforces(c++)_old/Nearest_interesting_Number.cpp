#include<bits/stdc++.h>
using namespace std;
int n;
main(){
cin>>n;
while((n%10+(n/10)%10+(n/100)%10+(n/1000)%10)%4)n++;
cout<<n;
}
