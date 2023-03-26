#include<bits/stdc++.h>
using namespace std;
int n,k,a,l;
string divide(int n){
    while(n--)cin>>a,a==100?k++:l++;
    return k&1||k==0&&l&1?"NO":"YES";
}
int main(){
    cin>>n;cout<<divide(n);
}
