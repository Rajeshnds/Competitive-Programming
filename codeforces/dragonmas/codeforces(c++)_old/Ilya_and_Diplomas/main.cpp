#include<bits/stdc++.h>
using namespace std;
int n,mi1,ma1,mi2,ma2,mi3,ma3,a,b;
void diplomas(){
    cin>>n>>mi1>>ma1>>mi2>>ma2>>mi3>>ma3;
    a=min(ma1,n-mi2-mi3);
    n-=a;
    b=min(ma2,n-mi3);
    cout<<a<<" "<<b<<" "<<n-b;
}
int main(){
    diplomas();
}
