#include <iostream>
using namespace std;

int main (){

    int numero;
    cout << "Digite um numero inteiro de 6 algarismos:" << endl;
    cin >> numero;
    if (numero > 999999 || numero < 100000)
    {
        cout << "Por favor coloque um numero de apenas 6 algarismos" << endl;
        return 0;
    }
    
    int a6 = numero%10;
    int a5 = numero /10;
    a5 = a5%10;
    int a4 = numero /100;
    a4 = a4%10;
    int a3 = numero / 1000;
    a3 = a3%10;
    int a2 = numero /10000;
    a2 = a2%10;
    int a1 = numero / 100000;
    
    cout << " os algarismos indentificados foram: " << a1 << " , " << a2 << " , " << a3 << " , " << a4 << " , " << a5 << " , " << a6 << " , ";

    
    if (a2 > a1 + a3)
    {
        cout << a2  << " e maior que os vizinhos" << endl;

    }
    if (a3 > a2 + a5 )
    {
        cout << a3  << " e maior que os vizinhos" << endl;

    }
    if ( a4 > a3 + a5)
    {
        cout << a4  << " e maior que os vizinhos" << endl;

    }
    if (a5 > a4 + a6)
    {
        cout << a5  << " e maior que os vizinhos" << endl;
    }
    
    return 0;
     







}
