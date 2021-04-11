#include<iostream>
#include<math.h>
using namespace std;

void prime(int x,int y);
int main()
{
    int a,b;
    cout<<"Enter the numbers between which you want the prime";
    cin>>a>>b;
    prime(a,b);

}

void prime(int num1,int num2){
    int k;
    
    for(int i=num1;i<num2;i++){     //iterate through through the numbers
        int k;
        for(k=2;k<i;k++){
            if(i%k==0) // if number is prime get out of the loop
                break;            
        }
        if(k==i) // if end of loop is reached without breaking number is prime
        cout<<i<<endl;
    }
}

//straightforward implementation with flag and sqrt but still xD
