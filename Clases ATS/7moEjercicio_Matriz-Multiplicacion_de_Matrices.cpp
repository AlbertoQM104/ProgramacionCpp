/*7moEjercicio_Matrices

Realice un programa que calcule el producto de dos matrices 
cuadradas de 3x3.

*/

#include <iostream>

using namespace std;

int main(){
	
	int m1[3][3],m2[3][3],m3[3][3];
	int i,j,k,num;
	
	
	cout<<"\t Multiplicacion de Matrices\n";
	cout<<"------------------------------------------------\n";
	cout<<"1ra Matriz\n";
	cout<<"------------------------------------------------\n";
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<"Ingrese un numero: ";
			cin>>num;
			m1[i][j]=num;
		}
	}
	
	cout<<"------------------------------------------------\n";
	cout<<"2da Matriz\n";
	cout<<"------------------------------------------------\n";
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<"Ingrese un numero: ";
			cin>>num;
			m2[i][j]=num;
		}
	}
	
	cout<<"------------------------------------------------\n";
	cout<<"1ra Matriz\n";
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<" ["<<m1[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	
	cout<<"2da Matriz\n";
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<" ["<<m2[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	
	
	cout<<"------------------------------------------------\n";
	cout<<"Nueva Matriz Multiplicada\n";
	//multriplicacion de matrices

	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			m3[i][j] = 0;
			for(k=1;k<=3;k++){
				m3[i][j] = m3[i][j] + m1[i][k] * m2[k][i];  
				//formula para la multiplicación de matrices
			}
		
		}
	}
	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<" ["<<m3[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	
	
	system("pause>nul");
	return 0;
}
