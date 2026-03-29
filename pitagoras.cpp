#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float CO; // Cateto Oposto
    cout << " Escolha o numero do seu cateto oposto para descobrir a hipotenusa: " << endl;

    cin >> CO;

    float CA;
    cout << " Escolha o numero do seu primeiro cateto  adjacente para descobrir a hipotenusa: " << endl;
    cin >> CA;

    if ((CO && CA) == 0)
    {
       cout << "A hipotenusa nao existira caso os dois catetos tenham valores de 0.";
    } else {

        float valorDaHipotenusa = sqrt(CO * CO + CA * CA);
        cout << "Quando o cateto oposto tem valor: " << CO << ", e o cateto adjacente tem valor : " << CA << ",  a hipotenusa tera como valor: " << valorDaHipotenusa;

    }
    return 0;
    










}