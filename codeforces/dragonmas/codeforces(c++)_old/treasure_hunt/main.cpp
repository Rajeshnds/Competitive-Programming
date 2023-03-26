#include<bits/stdc++.h>
using namespace std;
#define y1 y
int x1,y1,x2,y2,a,b;
int main(){
    cin>>x1>>y1>>x2>>y2>>a>>b;
    if((x2-x1)%a==0&&(y2-y1)%b==0&&
            ((x2-x1)/a+(y2-y1)/b)%2==0)
        cout<<"YES";
    else cout<<"NO";
}
