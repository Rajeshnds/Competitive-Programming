#include<iostream>
using namespace std;
int main(){
int n,a,b,d=0,e=0;
cin>>n;
while(n--){
    cin>>a>>b;
    (a==b ? d :(a>b ? d++ : e++));
}
cout<<(d==e? "Friendship is magic!^^":(d>e ? "Mishka" : "Chris"));
return 0;
}


