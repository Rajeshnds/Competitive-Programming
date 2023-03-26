#include<bits/stdc++.h>
using namespace std;
int a,b=1;
int count_floor(int a){
    while(to_string(++a).find('8')==-1)b++;
    return b;
}
int main(){
    cin>>a;cout<<count_floor(a);
}
