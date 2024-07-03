#include <iostream>
using namespace std;

double calculoPromedioMensual(double ventasMensuales[]){
	double sumaDeVentas=0.0,resultado;
	for (int i=0;i<12;i++){
		sumaDeVentas+=ventasMensuales[i];
	}
	resultado=sumaDeVentas/12;
	return resultado;
}
void mostrarPorcentaje(double ventasMensuales[],double promedioMensual,string meses[]){
	cout<<"\n El porcentaje por nivel de cada mes son los siguientes: "<<endl;
	for(int i=0;i<12;i++){
		double porcentaje=(ventasMensuales[i]/promedioMensual)*100;
		cout<<meses[i]<<": "<<porcentaje<<"% es ";
		if(porcentaje<40.0){
		cout<<"menos del 40% del promedio "<<endl;
		}else if(porcentaje<=75.0){
		cout<<"entre el 40% y 75% del promedio "<<endl;
		}else{
		cout<<"mas del 75% del promedio (EXCELENTE)"<<endl;
		}
	}
}
void mostrarMesesExcelentes(double ventasMensuales[],double promedioMensual,string meses[]){
	cout<<"\nLos meses con ventas exelentes fueron: "<<endl;
	for (int i=0;i<12;i++){
		double porcentaje=(ventasMensuales[i]/promedioMensual)*100;
		if (porcentaje>75.0){
			cout<<meses[i]<<endl;
		}
	}
}


int main(){
	double ventasMensuales[12];
	double promedioMensual;
	string meses[12]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
	 "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    
	cout<<"Ingrese las ventas mensuales del anio 2020: "<<endl;
	
	for(int i=0;i<12;i++){
		cout<<meses[i]<<": ";
		cin>>ventasMensuales[i];
	}
	
	promedioMensual=calculoPromedioMensual(ventasMensuales);
	cout<<"\nEl promedio de mensual de ventas es de: "<<promedioMensual<<endl;
	
	mostrarPorcentaje(ventasMensuales,promedioMensual,meses);
	mostrarMesesExcelentes(ventasMensuales,promedioMensual,meses);
	
	return 0;
}