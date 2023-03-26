#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,x=1;
cin>>a>>b;
while(x<10000){
if(a*pow(3,x)>b*pow(2,x)){
    cout<<x;
    break;
}
x++;
}
return 0;
}
