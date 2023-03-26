#include<bits/stdc++.h>
using namespace std;
int n;
main(){
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        char x=(abs(i-n/2)+abs(j-n/2)<=n/2)?'D':'*';
        cout<<x;
    }
    cout<<endl;
}
}
