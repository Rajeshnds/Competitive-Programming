#include<bits/stdc++.h>
using namespace std;
int h1,m1,h2,m2;
main(){
    scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
    int k=((h2+h1)*60+m2+m1)/2;
    printf("%02d:%02d",k/60,k%60);
}

