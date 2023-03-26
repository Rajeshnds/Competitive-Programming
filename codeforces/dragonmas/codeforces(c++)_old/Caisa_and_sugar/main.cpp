#include<bits/stdc++.h>
using namespace std;
int sugar,amount,max_sweet=-1;
void read(){
    int dollar,cents;
    cin>>sugar>>amount;
    for(int i=0;i<sugar;i++){
        cin>>dollar>>cents;
        if(dollar<=amount&&cents==0)max_sweet=max(max_sweet,0);
        else if(dollar<amount)max_sweet=max(max_sweet,100-cents);
    }
}
void show(){
    cout<<max_sweet;
}
int main(){
    read();
    show();
}
