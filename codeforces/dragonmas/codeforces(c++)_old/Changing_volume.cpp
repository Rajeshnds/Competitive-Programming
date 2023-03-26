#include<iostream>
using namespace std;
int main(){
int n,a,b;
cin>>n;
while(n--){
    cin>>a>>b;
    a=abs(a-b);
    cout<<a/5+(a%5+1)/2<<endl;
}
return 0;
}
