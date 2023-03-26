#include<bits/stdc++.h>
using namespace std;
int k,a,b,v,i=1;
int min_box(){
    cin>>k>>a>>b>>v;
    while((a+v-1)/v>min(b+i,i*k))i++;
    return i;
}
int main(){
    cout<<min_box();
}
