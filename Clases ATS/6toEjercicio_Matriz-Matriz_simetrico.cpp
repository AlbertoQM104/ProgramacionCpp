/*6toEjercicio_Matrices

Desarrollar un programa que determine si una matriz
es simétrico o no. Una matriz es simétrica si es cuadrada
y si es igual a su matriz transpuesta.

*/

#include <iostream>

using namespace std;

int main(){
	
	int m[100][100];
	int i,j,fil,col,num,n=0;
	
	cout<<"Ingrese numero de filas: ";
	cin>>fil;
	cout<<"Ingrese numero de columnas: ";
	cin>>col;
	
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<"Ingrese un numero: ";
			cin>>num;
			m[i][j]=num;
		}
	}
	
	cout<<"-----------------------------------\n";
	cout<"Matriz Normal\n";
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<" ["<<m[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	cout<"Matriz Transpuesta\n";
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<" ["<<m[j][i]<<"] ";	
		}
		cout<<endl;
	}
	
	//contador para sabir si es igual a la transpuesta
	if(fil==col){
		for(i=1;i<=fil;i++){
			for(j=1;j<=col;j++){
				if ( m[i][j]==m[j][i]){
					n++;
				}else{
					n=0;
				}
			}
		}
	}else {
		n=0;
	}

	cout<<"-----------------------------------\n";
	
	if(n==9){
		cout<<"Esta Matriz si es Simetrica! =)";
	}else {
		cout<<"Esta Matriz no es Simetrica";
	}
	

	system("pause>nul");
	return 0;
}
