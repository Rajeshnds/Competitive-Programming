#include<iostream>
using namespace std;
int main(){
int t,x;
cin>>t;
while(t--){
    cin>>x;
    cout<<(x>7?x/7+1:1)<<endl;
}
return 0;
}
