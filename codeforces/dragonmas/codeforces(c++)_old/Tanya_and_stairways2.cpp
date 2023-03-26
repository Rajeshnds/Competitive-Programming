#include<iostream>
using namespace std;
int main(){
int n,j=0,a[1000],k;
cin>>n;
for(int i=0;i<n;i++){
    cin>>k;
    if(k==1)
        j++;
    a[j]=k;
}
cout<<j<<endl;
for(int i=1;i<=j;i++)
    cout<<a[i]<<" ";
return 0;
}
