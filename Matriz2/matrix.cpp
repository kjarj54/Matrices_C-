#include "matrix.h"

Matriz::Matriz(){
	srand (time(NULL));
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			matrix[i][j]=0;
		}
	}
	for(int i=1;i<M-1;i++){
		for(int j=0;j<N;j++){
			matrix[i][j]=rand()%9;
		}
	}	
}

void Matriz::imprime(){
	
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void Matriz::sumar(){
	int suma;
	int millar=0;
	int millon=0;
	int mil=0;
	int cen=0;
	int de=0;
	int uni=0;
	int total;
	int cont=0;
	for(int i=1;i<M-1;i++,cont++){
		suma=0;
		suma=suma+matrix[i][cont];
		switch(cont){
			case 1:
				millar=suma*1000000000;
				break;
			case 2:
				millon=suma*100000;
				break;	
			case 3:
				mil=suma*1000;
				break;	
			case 4:
				cen=suma*100;
				break;					
			case 5:
				de=suma*10;
				break;						
			case 6:
				uni=suma*1;
				break;		
		}
	}
	total=millar+millon+mil+cen+de+uni;
	cout<<"La suma da com resultado :\n"<<total<<endl;
	
	for(int i=0;i<M-3;i++){
		for(int j=0;j<N;j++){
			matrix[i][j]=1;
		}
	}
	
	for(int i=3;i<M;i++){
		for(int j=0;j<N;j++){
			matrix[i][j]=1;
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
}
