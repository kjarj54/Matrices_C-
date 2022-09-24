#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "Programa.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");//actualiza la tabla ASCII para que salgan tildes y la letra ñ en pantalla
		
	cout<<"" 
        "\n" 
        "\nProgamacion 1"
        "\n"
        "\nProfesor: " 
        "\n\n"
	<<endl; 	
	Programa P;
	P.run();
	return 0;
}
