#include<iostream>
using namespace std;
int main(){
int n,a[201],d,k;
cin>>n;
for(int i=0;i<2*n;i++)
    cin>>a[i];
    cin>>d;
for(int i=1;i<2*n;i+=2)
    if(d<=a[i]){
        k=i;
    break;
}
cout<<n-k/2;
return 0;
}
