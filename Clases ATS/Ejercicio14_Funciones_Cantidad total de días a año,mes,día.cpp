/*Ejercicio14_Funcione

Escriba una función nombrada calc_años() que tenga un parámetro entero que represente
el número total de días desde la fecha 1/1/2000 y parámetro de referencia nombrados año,
mes y día. La función es calcular el año, mes y día actual para el número dado de días
que se le transmitan. Para este problema suponga que cada año tiene 365 días y cada mes tiene
30días. 

*/

#include <iostream>
#include <locale>

using namespace std;


void calc_anos(int, int& ,int& ,int&);


int main(){
	setlocale(LC_ALL,"");
	
	int total_d, ano, mes, dia;
	
	cout<<"Ingrese la cantidad de días que han transcurrido: ";
	cin>>total_d;
	
	calc_anos(total_d,ano,mes,dia);
	
	cout<<"------------------------------\n";
	cout<<"Cantidad de años : "<<ano<<endl;
	cout<<"Cantidad de meses: "<<mes<<endl;
	cout<<"Cantidad de días : "<<dia<<endl;
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
