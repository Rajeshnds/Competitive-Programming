#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589793238
double d,h,v,e;
void empty_glass(){
    cin>>d>>h>>v>>e;
    e=pi*d/2*d/2*e;
    if(e>=v)cout<<"NO";
    else{
        cout<<"YES"<<endl;
        h=pi*d/2*d/2*h;
        printf("%.81f",h/(v-e));
    }
}
int main(){
    empty_glass();
}
