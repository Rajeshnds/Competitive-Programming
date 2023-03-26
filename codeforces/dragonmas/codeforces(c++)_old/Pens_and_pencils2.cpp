#include<iostream>
using namespace std;
int main(){
int n,a,b,c,d,k;
cin>>n;
while(n--){
    cin>>a>>b>>c>>d>>k;
    if(((a+c-1)/c)+((b+d-1)/d)<=k)
        cout<<(a+c-1)/c<<" "<<(b+d-1)/d<<endl;
    else
        cout<<"-1"<<endl;
}
return 0;
}
