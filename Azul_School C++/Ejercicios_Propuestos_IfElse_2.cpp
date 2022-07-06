/*

1.- Muestre el listado de los posibles colores en los que puede estar un semáforo, con 
sus números asociados.
Color	Significado
1.- Rojo	“No pasar”
2.- Verde	“Adelante”
3.- Amarillo	“Precaución”

2.- Pida por teclado el número (dato entero) asociado a un color.

3.- Muestre el significado del color seleccionado.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	int col = 0;
	
	cout<<"------------------------------Semáforo------------------------------"<<endl;
	cout<<"1. Rojo"<<endl;
	cout<<"2. Verde"<<endl;
	cout<<"3. Amarillo"<<endl;
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"Ingrece el número del color: ";
	cin>>col;
	cout<<"--------------------------------------------------------------------"<<endl;
	
	if (col == 1){
		cout<<"El color Rojo significa 'NO PASAR'"<<endl;
	}else if(col ==2){
		cout<<"El color Verde significa 'ADELANTE'"<<endl;
	}else if(col==3){
		cout<<"El color Amarillo significa 'PRECAUCIÓN'"<<endl;
	}else{
		cout<<"No se encontro el color..."<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}




