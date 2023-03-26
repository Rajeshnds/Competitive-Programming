#include<bits/stdc++.h>
using namespace std;
int n,a,b[101];
string ticket(int n){
    for(int i=1;i<=n;i++){
        cin>>a;b[a]++;
        if(a==50)b[25]--;
        else if(a==100){if(b[50]>=1)b[50]--,b[25]--;else b[25]-=3;}
        if(b[25]<0||b[50]<0)return "NO";
    }
    return "YES";
}
int main(){
    cin>>n;
    cout<<ticket(n);
}
