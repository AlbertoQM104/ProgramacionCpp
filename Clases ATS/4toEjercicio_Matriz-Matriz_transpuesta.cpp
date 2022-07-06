/*4toEjercicio_Matrices

realice un programa que lea una matriz de 3x3
y crea su matriz traspuesta.La matriz traspuesta es 
aquella en la que la columna i era la fila i de la matriz
original

|1 2 3|				|1 4 7|
|4 5 6|    ---->    |2 5 8|
|7 8 9|				|3 6 9|

*/

#include <iostream>

using namespace std;

int main(){
	
	int m[100][100];
	int i,j,fil,col,num;

	

	cout<<"Ingrese el numero de filas: ";
	cin>>fil;
	cout<<"Ingrese el numero de columnas: ";
	cin>>col;
	cout<<"-------------------------------------\n";	
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<"Ingrese un numero: ";
			cin>>num;
			m[i][j]=num;
		}
	}
	
	cout<<"-------------------------------------\n";	
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<" ["<<m[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	
	cout<<"-------------------------------\n";
	cout<<"La Matriz Transpuesta\n\n";
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<" ["<<m[j][i]<<"] ";
		}
		cout<<endl;
	}
	
	system("pause>nul");
	return 0;
}
