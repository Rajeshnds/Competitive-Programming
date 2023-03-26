#include<bits/stdc++.h>
using namespace std;
long long n,a,b,s;
map<int,int>m1,m2;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        s+=m1[a+b]++;
        s+=m2[a-b]++;
    }
    cout<<s;
}
