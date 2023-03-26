#include<iostream>
using namespace std;
int main(){
long long n,a;
cin>>n;
while(n--){
    cin>>a;
    cout<<(a%2==0? a-1 :a)<<" ";
}
return 0;
}
