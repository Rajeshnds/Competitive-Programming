#include<iostream>
using namespace std;
int main(){
int n,a,b,k=0;
cin>>n;
while(n--){
    cin>>a>>b;
    if(b-a>=2)
        k++;
}
cout<<k;
return 0;
}
