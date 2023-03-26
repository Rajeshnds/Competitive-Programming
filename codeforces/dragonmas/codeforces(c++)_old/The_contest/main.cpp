#include<bits/stdc++.h>
using namespace std;
int minimal_time(){
    int total_required_time=0,problems,timeperiods;
    int time_for_each_problem;
    int lower_time_limit,upper_time_limit;
    cin>>problems;
    for(int i=0;i<problems;i++){
        cin>>time_for_each_problem;
        total_required_time+=time_for_each_problem;
    }
    cin>>timeperiods;
    int suitable_time[100001]={0};
    for(int i=0;i<timeperiods;i++){
        cin>>lower_time_limit>>upper_time_limit;
        for(int j=lower_time_limit;j<=upper_time_limit;j++)
            suitable_time[j]=1;
    }
    for(int i=total_required_time;i<=100000;i++){
        if(suitable_time[i])return i;
    }
    return -1;
}
int main(){
    cout<<minimal_time();
}
