#include<iostream>
using namespace std;
int a,p,i,b[101];
int main(){
cin>>a;
while(a--){
    cin>>p;
    i=max(i,++b[p]);
}
cout<<p;
}
