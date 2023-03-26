#include<iostream>
using namespace std;
int main(){
long long n,a,b,c;
cin>>n;
while(n--){
    cin>>a>>b>>c;
    cout<<a*(c-(c/2))-b*(c/2)<<endl;
}
return 0;
}
