#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
cout<<max(2*max(max(a,b),c)-a-b-c+1,0);
return 0;
}

