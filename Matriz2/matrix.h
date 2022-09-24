#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h> 
#include <stdio.h> 
using namespace std;
#define M 4
#define N 10
#if !defined(_MATRIZ_H)
#define _MATRIZ_H


class Matriz{
private:

	int matrix[M][N];
	
public:	
	Matriz();
	void imprime();
	void sumar();
	
};


#endif
