#pragma once
#include <iostream>
using namespace std;
class pila{
	typedef string p;
	int TAMPALINDROMA;
	p palindroma[];
public:
	pila(p palindroma[]);
	void agregarPila(p palindroma[], int tam);
	bool pilaVacia(const p palindroma[] );
	bool pilaLlena(const p palindroma[] );
	p obtenerPila() const;
	void listarPila(const p palindroma[]);
	void compararPila();

};

