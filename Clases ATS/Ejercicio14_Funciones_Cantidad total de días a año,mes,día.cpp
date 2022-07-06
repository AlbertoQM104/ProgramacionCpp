/*Ejercicio14_Funcione

Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente
el n�mero total de d�as desde la fecha 1/1/2000 y par�metro de referencia nombrados a�o,
mes y d�a. La funci�n es calcular el a�o, mes y d�a actual para el n�mero dado de d�as
que se le transmitan. Para este problema suponga que cada a�o tiene 365 d�as y cada mes tiene
30d�as. 

*/

#include <iostream>
#include <locale>

using namespace std;


void calc_anos(int, int& ,int& ,int&);


int main(){
	setlocale(LC_ALL,"");
	
	int total_d, ano, mes, dia;
	
	cout<<"Ingrese la cantidad de d�as que han transcurrido: ";
	cin>>total_d;
	
	calc_anos(total_d,ano,mes,dia);
	
	cout<<"------------------------------\n";
	cout<<"Cantidad de a�os : "<<ano<<endl;
	cout<<"Cantidad de meses: "<<mes<<endl;
	cout<<"Cantidad de d�as : "<<dia<<endl;
	cout<<"---------- "<<1+dia<<"/"<<1+mes<<"/"<<2000+ano<<" ----------"<<endl;
	
	system("pause>nul");
	return 0;
}




void calc_anos(int total_d, int& ano,int& mes,int& dia){
	
	ano = total_d / 365;
	total_d = total_d% 365;
	
	mes = total_d / 30;
	
	dia = total_d %30; 
	
	
	
}
