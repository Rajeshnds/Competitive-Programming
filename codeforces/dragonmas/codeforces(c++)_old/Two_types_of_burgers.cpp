#include<iostream>
using namespace std;
int main(){
int n,b,p,f,h,c;
cin>>n;
while(n--){
    cin>>b>>p>>f>>h>>c;
    if(h>c){
        swap(h,c);
        swap(p,f);
    }
    if(b>=(p+f)*2)
        cout<<(p*h)+(f*c)<<endl;
    else if(b>2*f&&b<(p+f)*2)
        cout<<(f*c)+((b-(2*f))/2)*h<<endl;
    else if(b<=2*f)
        cout<<(b/2)*c<<endl;
    }
return 0;
}
