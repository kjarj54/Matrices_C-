#include "vector.h"

Vector::Vector(){
	
	for(int i=0;i<TAM;i++){
		vec[i]=rand()%20+1;
	}
	suma=0;
}

void Vector::imprimir(){
	
	for(int i=0;i<TAM;i++){
		cout<<vec[i];
		
		if(i<TAM-1){
			cout<<",";	
		}
	}

}


void Vector::modaN(){
	int aux=0,cont=0,moda=0;


	for(int i=0;i<TAM;i++){
		vec[i];
	}
	for(int a=0;a<TAM;a++){
		cont=0;
		for(aux=0;aux<TAM;aux++){
			if(vec[a]==vec[aux]){
			cont++;
			}
			if(cont>=2){
			moda=vec[a];
			}
		}
	}
	cout<<endl;
	cout<<"La moda es :\n "<<moda;
}


void Vector::sumaImpar(){
	for(int i=0;i<TAM;i++){
		if(vec[i]%2==1){
			suma+=vec[i];
		}
	}
	cout<<endl;
	cout<<"Suma de los elemtos del vector:\n "<<suma;
	cout<<endl;
}


void Vector::shr(){
	int vec2[TAM];
	
	for(int i=0;i<TAM;i++){
		vec2[i]=vec[i];
	}
	
	for(int i=0;i<TAM;i++){
		vec[(i+TAM)%TAM]=vec2[i];
	}
	for(int i=0;i<TAM;i++){
		cout<<vec[i];
		
		if(i<TAM-1){
			cout<<",";	
		}
	}
		
}



