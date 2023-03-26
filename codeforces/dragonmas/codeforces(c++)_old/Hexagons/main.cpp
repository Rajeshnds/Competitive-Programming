#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll no_of_cells(ll n){
    return 3*(n)*(n+1)+1;
}
int main(){
    cin>>n;cout<<no_of_cells(n);
}
