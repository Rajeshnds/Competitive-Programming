#include<iostream>
using namespace std;
int main(){
int n,m,a,b,k=0;
cin>>n>>m;
for(int i=0;i<n*m;i++){
    cin>>a>>b;
    if(a||b)
        k+=1;
}
cout<<k;
return 0;
}
