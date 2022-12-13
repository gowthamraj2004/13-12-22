#include<iostream>
using namespace std;
int main(){
    int count,sum=0,i;
    cin>>count;
    for(i=1;i<=count;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}