#pragma once
#include <iostream>
using namespace std;
class pila{
	typedef string p;
	const int TAMPALINDROMA;
	p palindroma;
public:
	pila(p palindroma);
	void agregarPila(p palindroma, int tam);
	bool pilaVacia(p palindroma, int tam);
	bool pilaLlena(p palindroma, int tam);
	p obtenerPila() const;
	void listarPila();
	void compararPila();

};

