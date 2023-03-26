#include<iostream>
using namespace std;
int main(){
int n,a[200];
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++){
    if(a[i]==1){
        cout<<"Hard";
        break;
    }
    if(i==n-1)
        cout<<"easy";
}
    return 0;
    }


