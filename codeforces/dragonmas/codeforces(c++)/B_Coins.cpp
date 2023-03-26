#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    cout<<n<<" ";
    int i=2;
    while(n>1){
        while(n%i!=0)i++;
        n/=i;
        cout<<n<<" ";
        i=2;
    }
}