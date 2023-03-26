#include<bits/stdc++.h>
using namespace std;
int n,a;
int time_to_a(){
    cin>>n>>a;
    return a&1?(a+1)/2:n/2-(a-1)/2;
}
int main(){
    cout<<time_to_a();
}
