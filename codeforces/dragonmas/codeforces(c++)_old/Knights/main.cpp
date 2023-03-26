#include<bits/stdc++.h>
using namespace std;
int n;
void knights(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)&1)cout<<'W';
            else cout<<'B';
        }
        cout<<endl;
    }
}
int main(){
    cin>>n;knights(n);
}
