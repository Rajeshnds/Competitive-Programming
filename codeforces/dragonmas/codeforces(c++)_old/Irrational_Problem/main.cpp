#include<bits/stdc++.h>
using namespace std;
int p1,p2,p3,p4,a,b;
int permutaton(){
    cin>>p1>>p2>>p3>>p4>>a>>b;
    p1=min(p1,min(p2,min(p3,p4)));
    return max(0,min(p1,b)-a+(b<p1));
}
int main(){
    cout<<permutaton();
}
