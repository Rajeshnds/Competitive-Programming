#include<bits/stdc++.h>
using namespace std;
int t,a;
string angle(int a){
    return 360%(180-a)==0?"YES":"NO";
}
int main(){
    cin>>t;
    while(t--)cin>>a,cout<<angle(a)<<endl;
}
