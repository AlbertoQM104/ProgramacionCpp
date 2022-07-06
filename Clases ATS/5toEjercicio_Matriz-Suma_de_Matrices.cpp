/*5toEjercicio_Matrices

Realice un programa que calcule la suma de dos matrices
de 3x3.
*/

#include <iostream>

using namespace std;

int main(){
	
	int m1[100][100],m2[100][100],m3[100][100];
	int i,j,fil,col,num;
	
	cout<<"Ingrese el numero de filas: ";
	cin>>fil;
	cout<<"Ingrese el numero de columnas: ";
	cin>>col;
	cout<<"----------------------------------------\n";
	cout<<"1era Matriz\n";
	cout<<"----------------------------------------\n";
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<"Ingrese un numero: ";
			cin>>num;
			m1[i][j]=num;	
		}
	}
	
	cout<<"----------------------------------------\n";
	cout<<"2da Matriz\n";
	cout<<"----------------------------------------\n";
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<"Ingrese un numero: ";
			cin>>num;
			m2[i][j]=num;	
		}
	}
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			m3[i][j]=m1[i][j] + m2[i][j];		
			
		}
	}
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"1era Matriz\n";
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<" ["<<m1[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl;
	cout<<"2da Matriz\n";
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<" ["<<m2[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	cout<<"----------------------------------------\n";
	cout<<"Suma de las Matrices\n";
	cout<<"----------------------------------------\n";
	
	for(i=1;i<=fil;i++){
		for(j=1;j<=col;j++){
			cout<<" ["<<m3[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	
	system("pause>nul");
	return 0;
}
