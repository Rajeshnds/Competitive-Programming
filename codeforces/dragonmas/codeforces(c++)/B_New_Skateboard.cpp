#include<bits/stdc++.h>
using namespace std;
long long k,i,a,d,l;
char c;
int main(){
    while(cin>>c){
        i++;
        k=(c-'0');
        if(k%4==0){
            a++;
        }
        if((l*10+k)%4==0){
            a+=(i-1);
        }
        l=k;
    }
    cout<<a;
}