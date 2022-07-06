/*17voEjercicio_Bucles

en una clase de 5 alumnos se han realizado 3 examenes y se
requiere determinar el numero de :

a)alumnos que aprobaron todos los examens.
b)alumnos que aprobaron al menos un examen.
c)alumnos que aprobaron unicamente el ultimo examen.

realice un programa que permita la lectura de datos y el calculo
de las estadisticas.


*/

#include <iostream>

using namespace std;

int main(){
	
	int i,nota1,nota2,nota3,todos=0,almenos=0, ultimo=0;
		
		cout<<"\tMenu de Alumnos\n";
		cout<<"------------------------------------\n";
	
	for(i=1;i<6;i++){
		cout<<"Ingrese la la 1era nota del alumno #"<<i<<": ";
		cin>>nota1;	
		cout<<"Ingrese la la 2da  nota del alumno #"<<i<<": ";
		cin>>nota2;	
		cout<<"Ingrese la la 3ra  nota del alumno #"<<i<<": ";
		cin>>nota3;	
		cout<<endl;
		
	/*/	if((nota1>=11) && (nota2>=11) && (nota3>=11) ){
			todos+=1;
		}
		if((nota1>=11) || (nota2>=11) || (nota3>=11)){
			almenos+=1;
		}
		if((nota1<11) && (nota2<11) && (nota3>=11) ){
			ultimo+=1;
		}
*/	}
	
	
	cout<<"------------------------------------\n";
	cout<<"\na) Alumnos que aprobaron todos los examenes:          |"<<todos;
	cout<<"\nb) Alumnos que aprobaron al menos un examen:          |"<<almenos;
	cout<<"\nc) Alumnos que aprobaron unicamente el ultimo examen: |"<<ultimo;
	
	
	
	system("pause>nul");
	return 0;
}
