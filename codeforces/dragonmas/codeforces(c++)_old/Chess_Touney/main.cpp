#include<bits/stdc++.h>
using namespace std;
int n;
string wins_possible(){
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++)cin>>a[i];
    sort(a,a+2*n);
    return a[n]>a[n-1]?"YES":"NO";
}
int main(){
    cout<<wins_possible();
}
