#include<iostream>
using namespace std;
int main(){
int n,a=0;
string s;
cin>>n>>s;
for(int i=0;i<n;i++){
    if(s.substr(i,3)=="xxx")
        a++;
}
cout<<a;
return 0;
}
