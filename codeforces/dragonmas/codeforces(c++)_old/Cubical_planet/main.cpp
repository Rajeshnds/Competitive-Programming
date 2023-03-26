#include<bits/stdc++.h>
using namespace std;
int a,b,c,p,q,r;
string can_see(){
    cin>>a>>b>>c>>p>>q>>r;
    return a==p||b==q||c==r?"YES":"NO";
}
int main(){
    cout<<can_see();
}
