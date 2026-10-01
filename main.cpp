#include <iostream>

int main()
{
    int lvl = 0;
    std::cout << "Inserisci numero ";
    while (lvl <= 1){
        std::cin >> lvl;
        if (lvl <= 1)
            std::cout << "ERRORE: Inserisci un valore > 1!\n";
    }
    
    std::cout << " Calcolo FizzBuzz fino al numero "
            << lvl << "\n";
    
    
    for(int i=1; i <= lvl; i++){
   
        if(i%3 == 0 and i%5 == 0){
            std::cout << i << " FizzBuzz \n";
        } else if (i%3 == 0){ 
            std::cout << i << " Fizz \n"; 
        } else if (i%5 == 0){ 
            std::cout << i << " Buzz \n";
        } else { 
            std::cout << i << "\n"; 
        }
    }
    
    return 0;
    
}
