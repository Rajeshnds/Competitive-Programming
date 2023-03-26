#include<bits/stdc++.h>
using namespace std;
int x,y,a,b;
int min_distance(){
    cin>>x>>y>>a>>b;
    return 2*(max(2,abs(x-a)+1)+max(2,abs(y-b)+1));
}
int main(){
    cout<<min_distance();
}
