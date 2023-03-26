#include<bits/stdc++.h>
using namespace std;
char x,y;
int a,b,c,d,k;
int main(){
    cin>>x>>b>>y>>d;
    a=int(x-'a')+1;
    c=int(y-'a')+1;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(i==a||j==b||(i==c&&j==d)||
                    (abs(i-a)*abs(j-b)==2)||
                    (abs(i-c)*abs(j-d)==2))
                k++;
        }
    }
    cout<<64-k;
}
