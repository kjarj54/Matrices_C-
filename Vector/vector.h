#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#if !defined(_VECTOR_H)
#define _VECTOR_H
#define TAM 50
class Vector{
private:
	
	int vec[TAM];
	int suma;
public:	
	Vector();
	void imprimir();
	void modaN();
	void sumaImpar();
	void shr();
};
#endif
