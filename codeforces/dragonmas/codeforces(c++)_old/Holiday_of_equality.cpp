#include<iostream>
using namespace std;
int main(){
int n,a,b=0,c=0;
cin>>n;
int t=n;
while(n--){
    cin>>a;
    b=max(b,a);
    c+=a;
}
cout<<t*b-c;
return 0;
}
