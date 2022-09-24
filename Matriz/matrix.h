#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define M 5
#define N 5
#if !defined(_MATRIZ_H)
#define _MATRIZ_H
class Matriz{
private:	
	int matrix[M][N];
	int ran;
public:
	Matriz();
	void imprime();	
	void adivinarMenor();
	void columnaMayor();
	void ordenarFilas();
	void sumaMayoresSub();
};



#endif
