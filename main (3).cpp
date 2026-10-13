/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

int main()

{ 
    
    int n;
    int z;
    
    std::cout << " inserisci il primo numero ";
    std::cin >> n;
    std::cout << "inserisci secondo numero ";
    std::cin >> z;  
    if(n>z) 
    std::cout << " >>>>> ";
    if (n<z)
    std::cout << "<<<<";
    if(n==z)
    std::cout << "====";

    return 0;
}