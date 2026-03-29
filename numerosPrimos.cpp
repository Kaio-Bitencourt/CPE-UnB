#include <iostream>
#include <math.h>
using namespace std;

int main (){

    int numero;
    cout << "Escolha um numero para o programa avaliar se esse numero pertence aos primos: " << endl;
    cin >> numero;

    bool primo = true;


     for (int i = 2; i < numero; i++)
      {
        if (numero % i == 0 )
        {
           primo = false;
        break;
        } 
        
        
    }

    if (primo)
    {
        cout << "E primo";
        
    } else {
        cout << "Nao e primo";


    }
    


    




    

    


   
    
    return 0;
}