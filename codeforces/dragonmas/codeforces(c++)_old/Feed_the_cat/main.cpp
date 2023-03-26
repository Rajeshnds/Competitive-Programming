#include<bits/stdc++.h>
using namespace std;
double k,l,h,m,H,d,c,n;
double min_feedcost(){
    cin>>h>>m>>H>>d>>c>>n;
    k=ceil(H/n)*c;
    H=max(H,((20-h)*60-m)*d+H);
    l=ceil(H/n)*((4*c)/5);
    return min(k,l);
}
int main(){
    printf("%.81f",min_feedcost());
}
