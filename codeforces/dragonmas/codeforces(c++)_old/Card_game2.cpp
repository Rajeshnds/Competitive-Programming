#include<iostream>
using namespace std;
int main(){
int t,n,a,b,k1,k2;
cin>>t;
while(t--){
    cin>>n>>k1>>k2;
    while(k1--)
        cin>>a;
    while(k2--){
        cin>>b;
        k1=b==n?0:k1;
    }
    cout<<(k1?"YES":"NO")<<endl;
}
return 0;
}
