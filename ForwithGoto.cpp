#include <iostream>
using namespace std;
 int main(){
     int num,avg,sum=0,i,n;
     cout<<"Maximum no of inputs: ";
     cin>>n;
     for(i=1;i<=n;++i)
     {
        cout<<"Enter n"<<i<<" : ";
        cin>>num;
        if(num<0){
            goto label;
        }
        sum+=num;
     }
label:
    cout<<"Sum = "<<sum<<"\n";
    avg=sum/(i-1);
    cout<<"Average = "<<avg;
 }