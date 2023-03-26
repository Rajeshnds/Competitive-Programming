#include<iostream>
using namespace std;
int main(){
int n,t,k1,k2,a1,a2;
cin>>t;
while(t--){
        int max1=0,max2=0;
    cin>>n>>k1>>k2;
while(k1--){
    cin>>a1;
    max1=a1>max1?a1:max1;
}
    while(k2--){
        cin>>a2;
        max2=a2>max2?a2:max2;
    }
cout<<(max1>max2 ? "YES" :"NO")<<endl;
}
return 0;
}
