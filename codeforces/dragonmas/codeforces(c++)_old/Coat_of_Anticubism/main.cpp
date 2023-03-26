#include<bits/stdc++.h>
using namespace std;
int n,s,m,a;
int min_length(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,s+=a,m=max(m,a);
    return abs(s-m-m)+1;
}
int main(){
    cout<<min_length();
}
