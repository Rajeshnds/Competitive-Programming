#include<iostream>
using namespace std;
int main(){
int n,i;
cin>>n;
i=n/100+(n%100)/20+(n%20)/10+(n%10)/5+(n%5)/1;
cout<<i;
return 0;
}
