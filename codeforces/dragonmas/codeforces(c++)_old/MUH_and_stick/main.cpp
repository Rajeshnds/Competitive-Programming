#include<bits/stdc++.h>
using namespace std;
int a,b[10],f,j;
string stick(){
 while(cin>>a){b[a]++;if(b[a]==4)f=1,b[a]=0;}
 if(f){
     for(int i=1;i<10;i++)if(b[i])j++;
     return j==1?"Elephant":"Bear";
 }
 else return "Alien";
}
int main(){
    cout<<stick();
}
