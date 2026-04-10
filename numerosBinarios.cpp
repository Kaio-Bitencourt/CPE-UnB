#include <iostream>
using namespace std;

int main(){

    int numero = 0;
    cout << "Digite um numero inteiro de 0 a 15: " << endl;
    cin >> numero;

    if (numero < 0 || numero > 15)
    {
        cout << "Por favor, digite um numero entre 0 a 15.";
        return 1;
    }
    
    int q1 = numero/2 ;
     int r1 = numero%2;

     int q2 = q1 /2;
     int r2 = q1%2;

     int q3 = q1/2;
     int r3 = q2%2;

     int q4 = q3/2;

     cout << "o numero: " << numero << "em binario e: " << r1 << r2 << r3 << q4;

}
