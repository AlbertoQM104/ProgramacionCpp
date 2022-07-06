/*Ejercicio12_ Funciones

Esccriba una función nombrada cambio() que tenga un 
parámetro en número entero y seis parámetros de referencia en
número entero nombrados cien, cincuenta, veinte, diez, cinco 
y uno, respectivamente.
La función tiene que considerar el valor entero transmitido 
como una cantidad en dolares y convertir el valor en el número 
menor de billetes equivalentes.

*/


#include <iostream>
#include <locale>

using namespace std;

void cambio(int, int&, int&, int& ,int&, int&, int&);


int main(){
	
	setlocale(LC_ALL,"");
	
	int a1,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	
	cout<<"Ingrese un valor: ";
	cin>>a1;
	
	cout<<"-----------------------------\n";
	cambio(a1,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"Cantidad de billetes de 100: "<<cien<<endl;
	cout<<"Cantidad de billetes de 50 : "<<cincuenta<<endl;
	cout<<"Cantidad de billetes de 20 : "<<veinte<<endl;
	cout<<"Cantidad de billetes de 10 : "<<diez<<endl;
	cout<<"Cantidad de billetes de 5  : "<<cinco<<endl;
	cout<<"Cantidad de billetes de 1  : "<<uno<<endl;
	
	system("pause>nul");
	return 0;
}



void cambio(int num1, int& cien, int& cincuenta, int& veinte,int& diez, int& cinco, int& uno){
	

	cien= num1 / 100;
	num1 = num1 % 100;
	
	cincuenta= num1 / 50;
	num1 = num1 %50;
	
	veinte= num1 / 20;
	num1 = num1 % 20;
	
	diez= num1 / 10;
	num1 = num1 % 10;
	
	cinco= num1 / 5;
	num1 = num1 % 5;
	
	uno= num1 / 1;
	
	
	
}




