#include<bits/stdc++.h>
using namespace std;
int h,m;
int main(){
    scanf("%d:%d",&h,&m);
    printf("%f %f",((h%12)*60+m)*0.5,m*6.0);
}
