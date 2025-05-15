#include "pila.h"

void pila::agregarPila(p palindroma[], int tam) {
	palindroma = palindroma;
	TAMPALINDROMA = palindroma->size();
	tam = TAMPALINDROMA;
}

pila::pila(p P[]){
	P = palindroma;
}

bool pila::pilaVacia(const p palindroma[]){
	return palindroma->empty();
}

bool pila::pilaLlena(const p palindroma[]){
	return palindroma->size()>TAMPALINDROMA;
}

pila::p pila::obtenerPila() const{
	return palindroma[TAMPALINDROMA];
}

void pila::listarPila(const p palindroma[]){
	for (int i = 0; i < palindroma->size(); i++) {
		cout << palindroma[i];
	}
	cout << endl;
}

void pila::compararPila(){
	bool confirmar=false;
	if (pilaVacia){
		cout << "La pila esta vacia"<<endl;
	}
	else if (pilaLlena) {
		cout << "La pila esta llena" << endl;
	}
	else {
		for (int i = 0; i < palindroma->size(); i++){
			for (int j = i; j > 0; j--) {
				if (palindroma[i]==palindroma[j]) {
					confirmar = true;
				}
			}
		}
		if (confirmar){
			cout << "La frase es un palíndromo." << endl;
		}
		else {
			cout << "La frase no es un palíndromo." << endl;
		}
		
	}
}



