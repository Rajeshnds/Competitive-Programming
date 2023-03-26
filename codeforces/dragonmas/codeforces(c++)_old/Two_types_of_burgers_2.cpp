#include<iostream>
using namespace std;
int main(){
int n;cin>>n;
while(n--){
    int b,p,f,h,c;cin>>b>>p>>f>>h>>c;b/=2;
    int a=0;
    while (b and p+f){
        if(p and (h>=c or f==0))a+=h,--b,--p;
        else a+=c,--b,--f;
    }
    cout<<a<<endl;
}
return 0;
}
