#include<bits/stdc++.h>
using namespace std;
int a[1001],k;
char c;
int main(){
    while(cin>>k){
        cin>>c;
        a[k]=1;
    }
    bool ok=false;
    for(int i=1;i<=1000;){
        if(a[i]){
            if(ok)cout<<',';
            cout<<i;
            ok=true;
            i++;
            if(a[i]){
                while(a[i])i++;
                cout<<'-'<<i-1;
            }
        }
        else i++;
    }
}
