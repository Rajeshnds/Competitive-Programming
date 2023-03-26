#include<iostream>
using namespace std;
int main(){
int n,a,b,c,k=0;
cin>>n;
while(n--){
    cin>>a>>b>>c;
    if(a+b+c>=2)
        k++;
}
cout<<k;
return 0;
}
