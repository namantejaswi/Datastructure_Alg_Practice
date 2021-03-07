//
//  main.cpp
//  Recursion
//
//  Created by Naman Tejaswi on 23/08/17.
//  Copyright © 2017 Naman Tejaswi. All rights reserved.
//

#include <iostream>

int Factorial(int a)
{   if (a<=1)
        return 1;
    else
        return a*Factorial(a-1);
}
int Fibonnaci(int b){ // Fibonacci series is 0,1,1,2,3,5,8,13,21,34.....i.e it is the sum of last two terms
    if (b<=1)
        return b;
    else
        return ((b-1)+(b-2));
}
int main() {
    // insert code here...
    int x,y;
    std::cout << "Enter the number to find its factorial";
    std::cin>>x;
    std::cout<<Factorial(x);
    std::cout<<"\n" "Enter the term till which you want to find its fibonnaci sum ";
    std::cin>>y;
    std::cout<<Fibonnaci(y);
    return 0;
}
