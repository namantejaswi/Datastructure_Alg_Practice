#include<iostream>
using namespace std;

// nCr=n!/(n-r)!.r!

long fact(int num){

    if (num<=1)     //Base case
        return 1;
    else 
        return(num*fact(num-1));     //Recursive tree 4!= 4*fact(3) : fact 3=3*fact(2) : fact(2)= 2* 1 fact(1)=1 4*3*2*1 
}

int nCr(int n, int r){
    int bnc=0;
    if(r>n){
        cout<<" cant select more obejects than you have >.<";
        return 0; 
    }
    else 
        bnc= (fact(n)/(fact(n-r)*fact(r)));
        return bnc;

}
int main(){
    int r=0;
    int n=0;
    cout<<" Enter the values of n and r to compute the binary coefficient nCr"; //wont handle Too large expnential answer 
    cin>>n>>r;
    cout<<nCr(n,r);

    return 0;
}