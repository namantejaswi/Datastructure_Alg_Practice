//
//  main.cpp
//  testing
//
//  Created by Naman Tejaswi on 24/06/17.
//  Copyright © 2017 Naman Tejaswi. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int r=116;
    int *ptr=&r;
    int **ptrr;
    ptrr=&ptr;

    // or we can declare and initialize at 2 different placeslike,int *ptr, ptr=&r;
    std::cout<<"\n the value of the pointer is"<<*ptr;
    std::cout<<"\n the address of the pointer is"<<ptr;//we need not write & again a
    std::cout<<"\n the value of the variable is"<<r;
    std::cout<<"\n the value of the new pointer to the old pointer is"<<**ptrr;//*ptrr and &ptrr still will yield addresses
    std::cout<<"\n the adress fo the new pointer pointing to oldcpointer is"<<ptrr;//again & is optional
    std::cout<<"\n pointer arithmetic adding 1 "<<++ptr;

    int *ptrn=NULL;
    /*
    std::cout<<"\n value of null pointer is"<<*ptrn;
    std::cout<<"\n address of nul pointer is"<<&ptrn;
    carefull On most of the operating systems, programs are not permitted to access memory at address 0 because that memory is reserved by the operating system. we cant check null ptr like this segm fault or untime value how can u ask the address to nothing th value of nothing we thus use the if statement */
    if(ptrn)
        std::cout<<"\n pointer is not null";
    if(!ptrn)
        std::cout<<"\n pointer is null";
    
    //now we try to access an array with the help of explicit pointers-which is trash
    int arr[10]={10,11,22,33,44,55,65,75,85,93};
    int *pointer;
    pointer=&arr[0];
    std::cout<<"\n Printing the values and address of the pointer to the array of integers";
    for (int x=0; x<10; x++,pointer++) {
        std::cout<<"\n value of element no."<<x<<" is "<<*pointer;
        std::cout<<"\n Address of the element n0."<<x<<" is "<<pointer;
    }
    // but arrays are basically just seqential pointing address so w
    // now we can use *arr as array is just pointing to the begining of element list but then we cant change the address of the ie we cant perform ++arr because the pointer arr is constant pointing to the begining of the array and cant be used as l value however ve still can access the elements and perform operations on them like *(var +9)=7 this will set the value of the element 9 to 7 and likewise
    // so array can be used as a pointer only to access or modify its element not manipulate addresses however we can still access its address only limitation is we cant modify it
    int ar[5]={9,8,7,6,5};
    for (int z=0; z<5; z++){
            std::cout<<"\n"<<*(z+ar);//value of address begin plus z
    }
    std::cout<<"\n address cant be manipulated as array is a constant pointer pointing to the address of the begining of list which is"<<ar;
    // note it is
    std::cout<<(ar+1); //however we cant use ++ar as it will change the value (which is a addres) of ar
    // making an array of pointers
    const int max=3;
    int a[max]={100,200,300};
    int *pt[3];
    for (int c=0; c<max; c++) {
        pt[c]=&a[c];
        std::cout<<"\n we have an array of pointers pointing to an array of integers"<<pt[c]<<"with value"<<*pt[c];//we can also have an array of pointers pointing to strings[char]
    }
    
    return 0;
}
