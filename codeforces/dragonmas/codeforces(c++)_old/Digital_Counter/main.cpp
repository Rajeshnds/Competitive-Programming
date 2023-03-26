#include<bits/stdc++.h>
using namespace std;
int a[10]={2,7,2,3,3,4,2,5,1,2},n;
int good_digits(int n){
    return a[n/10]*a[n%10];
}
int main(){
    cin>>n;cout<<good_digits(n);
}
