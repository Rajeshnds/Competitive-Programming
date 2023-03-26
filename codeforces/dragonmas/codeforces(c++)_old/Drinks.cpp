#include<iostream>
using namespace std;
int main(){
int k=0,n,a;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a;
    k=k+a;
}
cout<<(double)k/n;
return 0;
}
