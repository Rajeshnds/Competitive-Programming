#include<bits/stdc++.h>
using namespace std;
int n;
int segments(int n){
    return ceil(sqrt(n)*2);
}
int main(){
    cin>>n;cout<<segments(n);
}
