#include<bits/stdc++.h>
using namespace std;
int q,n;
int main(){
    for(cin>>q;q--;){
        cin>>n;
        cout<<(n<4||n==5||n==7||n==11?-1:n/4-n%2)<<endl;
    }
}