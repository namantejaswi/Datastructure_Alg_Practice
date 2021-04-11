#include<iostream>
#include<math.h>
using namespace std;


void armstrong(int num){
    int orignal_num=num;
    int remainder=0,sum=0;
        while(num>0){
            remainder=num%10;
            sum+=pow(remainder,3);
            num=num/10;
        }
    if(orignal_num==sum)
    cout<<"The number is armstrong number";
    else if (orignal_num!=sum)
    cout<<"Not an armstrong number";

    cout<<" Armstrong numbers upto 1k are"<<endl;  // only considering 3 digit amstrong number 
    
    for(int i=1;i<100000;i++){     
        int r=0,s=0,x=0;
        for(x=i;x>0;){
            r=x%10;
            s+=pow(r,3);
            x=x/10;
        }
        if(i==s)
        cout<<i<<"\n";
    }
    
}



int main(){

    int n;
    cout<<"Enter the number";
    cin>>n;
    armstrong(n);
    return 0;
}