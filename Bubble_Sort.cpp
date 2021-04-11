
/* 
Bubble sort  Time complexity -- O(n*n), Auxillary Space O(1)
*/


#include<iostream>

using namespace std;


void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}



int bubble(int Arr[], int s){
    int temp=0;
    for(int k=0;k<s-1;k++)
        for (int j=0;j<s-1;j++)
            if(Arr[j]>Arr[j+1])
                swap(&Arr[j],&Arr[j+1]);                              //Ampersand & address of

cout<<"Using bubble sort we have the sorted array as "<<endl;        
for (int k = 0; k < s; k++)
        cout << Arr[k] << endl;      
    return 0;
}


int main(){


int A[]={43,6,9,0,45,77,98,32,116,5};

int size=sizeof(A)/sizeof(A[0]);
cout<<"The size of the array we will sort has "<<size<<" unsorted elements which are"<<endl;

bubble(A,size)   ; 
return 0;
}