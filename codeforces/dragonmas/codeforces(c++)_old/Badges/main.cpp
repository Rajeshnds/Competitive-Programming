#include<bits/stdc++.h>
using namespace std;
int b,g,n;
int suitable_deck(){
    cin>>b>>g>>n;
    return min(b,n)-(n-min(n,g))+1;
}
int main(){
    cout<<suitable_deck();
}
