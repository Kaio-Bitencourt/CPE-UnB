//Nome do aluno: Kaio Bitencourt Raspante.
//Matricula: 261033012
//Data: 11/04/2026
//Tarefa para casa 01
#include <iostream>
using namespace std;

int main (){

    //Como informado no primeiro passo, eu pedi ao usuario para escolher um numero entre 1-255

    cout << "Por favor, digite um numero inteiro entre 1 e 255 para ser criptografado: " << endl;
    int numero;
    cin >> numero;

    //Agora, vou colocar um "if" para checar realmente se o numero esta dentro desse intervalo informado

    if (numero < 1 || numero > 255)
    {
        cout << "Por favor, informe um numero que esteja entre 1-255.";
        return 0;
    }
    
    //Repetindo o primeiro passo, porem agora para o usuario escolher a chave secreta

    cout << "Por favor, informe um outro numero inteiro entre 1 e 155 para ser a chave secreta: " << endl;
    int chave_Secreta;
    cin >> chave_Secreta;
    cout << "------------------------------------------" << endl;

    //Irei fazer um "if" de mesma funcao que o anterior, mas agora para checar o intervalo da chave secreta

    if (chave_Secreta < 1 || chave_Secreta > 155)
    {
        cout << "Por favor, informe um numero que esteja entre 1-155.";
        return 0;
    }

    //Aplicando a operacao logica de XOR; e mostrar ao usuario o numero embaralhado

    int operacao_Xor = numero ^ chave_Secreta;

    cout << "Agora os numeros estao embaralhados em XOR: " << operacao_Xor << endl;
    cout << "------------------------------------------" << endl;

    //Agora vou fazer o "shift" manual, segundo as regras do exercicio. Multiplicar por 8 = 2^3, para que os bits andem 3 casas para esquerda
     
     int tres_Esquerda = (operacao_Xor*8) + 100;

     cout << "Apos embaralharmos um pouco mais o numero em XOR, o resultado esta assim: " << tres_Esquerda << endl;
     cout << "------------------------------------------" << endl;

     //Eu vou agora inverter os numeros de posicao, colocando o ultimo em primeiro, o penultimo em seugundo e assim sucessivamente
     //Para fazer essa logica eu pensei "ah, se o numero pra ir pra esquerda eu multiplico, pra voltar eu divido", entao eu vou tentar usar isso:

     int mistura_Final = tres_Esquerda/8;

     cout << "Apos o embaralhamento final teremos o numero criptografado: " << mistura_Final << endl;
     cout << "------------------------------------------" << endl;

     //Depois de termos a mistura final teremos que fazer o inverso para podermos voltar ao numero original
     //1-Para fazer o inverso eu multipliquei por 8, porque na minha variavel "mistura_Final" eu tinha dividido;
     //2-depois eu tirei 100, porque na minha variavel "tres_esquerda" eu tinha adicionado 100;
     //3-nessa mesma variavel "tres_esquerda, tem uma multiplicacao por 8, entao eu dividi, ja que queremos o inverso."
     //4-para fazermos o inverso e acharmos o numero original quando eu fiz a "operacao_Xor", vamos fazer um XOR de novo, porem com a primeira parte que eu fiz "voltando_parte1" e utilisando a chave secreta para obtremos o valor desejado
     int voltando_parte1= ((mistura_Final * 8) -100) / 8;

     int voltando_parte2 = (voltando_parte1 ^ chave_Secreta);

     cout << "Entao aqui temos uma aproximacao do seu numero original, porque quando voce divide um numero inteiro a maquina ignora o valor decimal, sendo assim, temos como numero orignal: " << voltando_parte2;
     //Dai aqui eu so mostrei para o usuario.

    return 0;


}
