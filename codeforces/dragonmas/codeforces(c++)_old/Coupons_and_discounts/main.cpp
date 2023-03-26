#include<bits/stdc++.h>
using namespace std;
int n,b,k;
string rewards(int n){
    cin>>b;b&1?k=1:k=0;
    for(int i=1;i<n;i++){
        cin>>b;
        if(k&&b-k>=0)b--;
        else if(b-k<0)return "NO";
        b&1?k=1:k=0;
    }
    return k?"NO":"YES";
}
int main(){
    cin>>n;cout<<rewards(n);
}
