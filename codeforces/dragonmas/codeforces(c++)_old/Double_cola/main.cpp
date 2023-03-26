#include<bits/stdc++.h>
using namespace std;
int n;
string t[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
string cola(int &n){
    while(n>5)n=n/2-2;
    return t[n-1];
}
int main(){
    cin>>n;
    cout<<cola(n);
}
