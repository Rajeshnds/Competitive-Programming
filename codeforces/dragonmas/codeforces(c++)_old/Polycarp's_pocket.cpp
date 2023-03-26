#include<iostream>
using namespace std;
int main(){
int n,res=0,a[100]={0},i;
cin>>n;
while(n--){
    cin>>i;
    a[i]++;
    if(a[i]>res)
        res=a[i];
}
cout<<res;
return 0;
}
