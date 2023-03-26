#include<bits/stdc++.h>
using namespace std;
int n,a,m;
int pylon(int,int &){m=max(m,a);}
int main(){
    cin>>n;while(n--)cin>>a,pylon(a,m);
    cout<<m;
}
