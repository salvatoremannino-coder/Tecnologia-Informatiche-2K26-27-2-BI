/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* Chiedere all’utente un numero N >=1. Stampare in output se il numero inserito è un numero primo o no.
Un numero è primo se è divisibile solo per se stesso e per 1. (I primi numeri primi sono 1,2,3,5,7,11,13,17,19…)
Esempio:
Input: N = 23
Output: Il numero è primo!
*/

#include <iostream>
using namespace std;
int main()
{   
    float n1,n2,n3,n4,n5;
    
    cout<<"Inserisci il primo numero" << endl;
    cin>> n1;
    cout<<"Inserisci il secondo numero" << endl;
    cin>> n2;
    cout<<"Inserisci il terzo numero" << endl; 
    cin>> n3;
    cout<<"Inserisci il quarto numero"<< endl; 
    cin>> n4;
    cout<<"Inserisci il quinto numero" << endl;
    cin>> n5;
    
    cout<<"La media è:" << (n1+n2+n3+n3+n5)/5 << endl;
    return 0;
}