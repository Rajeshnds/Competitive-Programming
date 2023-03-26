#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
    cin>>n>>k;
    if((k==1&&n>1)||k>n)cout<<-1;
    else if(n==1)cout<<'a';
    else{
        int d=k-2;
        for(int i=1;i<=(n-d)/2;i++)cout<<"ab";
        if((n-d)%2)cout<<'a';
        char c='c';
        for(int i=0;i<d;i++)cout<<c,c++;
    }
}