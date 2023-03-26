#include<iostream>
using namespace std;
int main(){
int a,b,n,d=0;
cin>>a>>b;
while(a--){
    cin>>n;
    (n>b ? d+=2 : d++);
}
cout<<d;
return 0;
}


