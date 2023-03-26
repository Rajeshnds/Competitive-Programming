#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    cout<<39<<endl;
    for(int i=1;i<=19;i++){
        int k=log2(n)+1;
        n^=(1<<k)-1;
        n++;
        cout<<k<<" ";
    }
    cout<<log2(n)+1;
}