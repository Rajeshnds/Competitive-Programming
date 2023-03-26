#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int min_time(int n){
    while(n--){
        cin>>a;
        b=max(b,min(a-1,1000000-a));
    }
    return b;
}
int main(){
    cin>>n;cout<<min_time(n);
}
