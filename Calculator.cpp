#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int num1,num2;
    char ch;
    cin>>num1>>num2>>ch;
    switch(ch){
        case '+':
            cout<<fixed<<setprecision(2)<<(float)num1+(float)num2;
            break;
        case '-':
            cout<<fixed<<setprecision(2)<<(float)num1-(float)num2;
            break;
        case '*':
            cout<<fixed<<setprecision(2)<<(float)num1*(float)num2;
            break;
        case '/':
            cout<<fixed<<setprecision(2)<<(float)num1/(float)num2;
            break;
        case '%':
            cout<<fixed<<setprecision(2)<<fmod(num1,num2);
            break;
        default:
            cout<<"Invalid Input";
    }
    return 0;
}