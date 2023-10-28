/******************************************************************************
 * 
Crie um programa que solicita ao usuário um número e imprime a tabuada desse número de 1 a 10.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num;
    int conta;
    conta = 0;
    cout << "digite um numero: ";
    cin >> num;
    
    for(int i; i<=10; i++){
        conta = num*i;
        cout << num << "x" << i << " = " << conta << endl;
    }

    return 0;
}
