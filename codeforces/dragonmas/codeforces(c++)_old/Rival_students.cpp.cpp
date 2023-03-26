#include<iostream>
using namespace std;
int main(){
int t,n,x,a,b;
cin>>t;
while(t--){
    cin>>n>>x>>a>>b;
    cout<<min(n-1,abs(a-b)+x)<<endl;
}
return 0;
}
