#include <iostream>

using namespace std;

int main(){

    int maior=0, num, quant;
    bool opção;

    while(!opção){ 

    cout << "Digite um numero: \n\n";
    cin >> num;

    if(num > maior){

        num = maior;

    }

    if(quant < 11){
        opção = true;
    }

    }

    return 0;
}