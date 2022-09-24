#include "matrix.h"





Matriz::Matriz(){
	srand (time(NULL));
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			matrix[i][j]=rand()%20+1;	
		}
	}
	
	ran=rand()%20+1;
}



void Matriz::imprime(){
	
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			
			cout<<matrix[i][j];
			if(j<N-1){
				cout<<",";	
			}	
		}
		cout<<endl;
	}
}

void Matriz::adivinarMenor(){
	cout<<"\nEl numero generado al azar es:\n"<<ran<<endl;
	
	int menor=9999;
	int valor;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			valor=matrix[i][j];
			if(menor>valor){
				menor=valor;
			}
		}
	}
	if(menor<ran){
		cout<<"El numero mas pequeño de la matriz es: ("<<menor<<") que esta dentro de la matriz\n";
	}else{
		
		cout<<"El numero mas pequeño de la matriz es igual al numero generado al azar\n";
	}

}

void Matriz::columnaMayor(){
	int mayor=0;
	int sumaCol[N];
	int iMa;
	for(int i=0;i<M;i++){
		int suma=0;		
    	for(int j=0;j<N;j++){
        	suma+=matrix[i][j];
    	}
    	sumaCol[i]=suma;
    	if(mayor<suma){
    		mayor=suma;	
    		iMa=i+1;
		}		
	}

	cout<<"\nSuma de la columna que hace una suma mas grande es:\n";
	cout<<mayor<<endl;
	cout<<"\n";
	for(int i=0;i<M;i++){
		cout<<matrix[i][iMa]<<endl;
	}
	cout<<"\n\n";
}
void Matriz::ordenarFilas(){
	
}

void Matriz::sumaMayoresSub(){
	int i,j;
	cout<<"digite i\n";
	cin>>i;
	cout<<"digite j\n";
	cin>>j;
	
}




