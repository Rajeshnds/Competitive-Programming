#include<iostream>
using namespace std;
int k,l,j;
void vowels(int k){
    for(int i=5;i<=k/5;i++)if(k%i==0){l=k/i;break;}
    if(l)for(int i=0;i<k;i++)cout<<"aeiou"[(i%l+i/l)%5];
    else cout<<-1;
}
int main(){
    cin>>k;vowels(k);
}
