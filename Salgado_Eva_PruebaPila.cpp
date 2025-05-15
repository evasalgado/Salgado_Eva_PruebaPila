#include <iostream>
#include "pila.h"
int main(){
	string frase=" ";
	do{
		cout << "Frase: ";
		cin >> frase;
	} while (!frase.empty());
	cout << "Termina el programa" << endl;
}
