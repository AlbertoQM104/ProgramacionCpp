/*Busqueda Binaria

el  arreglo tiene que estár ordenado de forma ascendente
*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int inf=0,sup=0,mitad,dat;
	char f='F';
	int i,pos,aux,cant=0;
	
	cout<<"Ingrese cantidad de valores del vector: ";
	cin>>cant;
	cout<<"-------------------------------------------------------\n";
	
	for(i=0;i<cant;i++){
		cout<<"Ingrese un numero: ";
		cin>>v[i];
	}
		
	cout<<"-------------------------------------------------------\n";
	cout<<"Valor a ser buscado en el vector: ";
	cin>>dat;
	
	//ordenarlo
	for(i=0;i<cant;i++){
		aux = v[i];
		pos = i;
		
		while((pos>0) && (v[pos-1]>aux)){
			
			v[pos] = v[pos-1];
			pos--;
		}
		v[pos] = aux;
	}
	
	cout<<"-------------------------------------------------------\n";
	
	inf=0;
	sup=cant;

	//busqueda binaria

	while (inf <= sup){
		
		mitad = (inf + sup)/2;
		
		if(v[mitad] == dat){
			f = 'V';
			break;
		}
		
		if(v[mitad]>dat){
			sup = mitad;
		//	mitad = (inf+sup)/2;
		}
		
		if(v[mitad]<dat){
			inf = mitad;
		//	mitad = (inf+sup)/2;
		}	
		
		if(mitad == sup-1){  //le da solución a los numeros que no encuentra
			break;
		}
	}
	
	if(f=='V'){
		cout<<"Se pudo encontrar el valor ["<<dat<<"] en el arreglo!";
	}else
	if(f=='F'){
		cout<<"No se pudo encontrar el valor ["<<dat<<"] en el arreglo.";
	}
	
	system("pause>nul");
	return 0;
}


