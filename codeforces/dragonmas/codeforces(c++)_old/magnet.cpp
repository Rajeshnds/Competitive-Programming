#include<iostream>
using namespace std;
int main(){
int n,a=0,b=0,c=0;
cin>>n;
while(n--){
    cin>>a;
    if(a!=c)
        b++;
    c=a;
}
cout<<b;
return 0;
}
