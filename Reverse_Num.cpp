#include<iostream>
using namespace std;


void rev_num(int num){
    int rev=0;
    while(num>0){
        rev=num%10+(rev*10);
        num=num/10;
    }
    cout<<rev;
}


int main(){

    int n;
    cout<<"Enter the number you want to reverse";
    cin>>n;
    rev_num(n);
    return 0;
}