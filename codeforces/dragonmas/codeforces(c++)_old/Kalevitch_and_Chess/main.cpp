#include<bits/stdc++.h>
using namespace std;
char c[8];
int f,l,k;
int black_chess(){
    for(int i=0;i<8;i++){
        k=0;
        for(int j=0;j<8;j++){
            cin>>c[j];
            if(c[j]=='B')k++;
        }
        if(k==8)l++;
        else f=k;
    }
    return l+f;
}
int main(){
    cout<<black_chess();
}
