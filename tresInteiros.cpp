#include <iostream>
#include<math.h>
using namespace std;

int main(){

    int first_number = 0;
    cout << "digite o primeiro numero inteiro:" << endl;
    cin >> first_number;

    int second_number = 0;
    cout << "digite o segundo numero inteiro:" << endl;
    cin >> second_number;

    int third_number = 0;
    cout << "digite o terceiro numero inteiro:" << endl;
    cin >> third_number;

    if (first_number == second_number || second_number ==  third_number || first_number == third_number)
    { 
        cout << "Por favor digite 3 numeros diferentes";
    }
    else if ((first_number > second_number) && (first_number != second_number))
    {
        if (first_number > third_number && (first_number != third_number))
        {
           cout << "O numero " << first_number << " e maior que os numeros: " << second_number <<  " e " << third_number;
        }
        
    }else if ((second_number > first_number) && (first_number != second_number))
    {
        if (second_number > third_number && (second_number != third_number))
        {
           cout << "O numero " << second_number << " e maior que os numeros: " << first_number << " e " << third_number;
    
        }

    } else if ( (third_number > first_number) && (third_number != first_number))
    {
        if (second_number < third_number && (second_number != third_number))
        {
           cout << "O numero " << third_number << " e maior que os numeros: " << first_number << " e " << second_number;
        }
    }
    


    return 0;
    
    








}
