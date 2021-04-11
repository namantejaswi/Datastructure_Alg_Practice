#include<iostream>
using namespace std;


// Run time O(n^2), in place sorting 


void Ins_sort(int Array[],int size){


    for(int i=1,key=0;i<=size;i++,key++){
        for(;key<=0,Array[key]>Array[i];i--,key--){    //while(Array[key]>Array[i])----- swap()---- i--,key--
                int temp =Array[key];
                Array[key]=Array[i];
                Array[i]=temp;
        }
    }



    for(int x=0;x<=size;x++){
        cout<<Array[x]<<endl;
        }
    

}

int main()
{
    int Arr[] = {91,21,34, 1, 4, 99, 116, 3, 77, 55,7,1000};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    Ins_sort(Arr, size);
    return 0;
}
