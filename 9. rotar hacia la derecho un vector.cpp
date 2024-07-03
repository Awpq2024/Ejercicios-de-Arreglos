#include <iostream>
using namespace std;

void vectorHaciaDerecha(int vector[],int n){
	if(n<=1)
	return;
	int auxiliar=vector[n-1];
	for(int i=n-1;i>0;--i){
		vector[i]=vector[i-1];
	}
	vector[0]=auxiliar;
}
void vectorImpreso(int vector[],int n){
	for (int i=0;i<n;++i){
		cout<<vector[i]<<" ";
	}
}

int main(){
	int vector[100];
	int n;
	cout<<"Ingrese una cantidad de elementos para el vector: ";
	cin>>n;
	
	for(int i=0;i<n;++i){
		cout<<"Ingrese el elemento "<<i+1<<" del vector: ";
		cin>>vector[i];
	}
	cout<<"El vector original esta formado por: ";
	vectorImpreso(vector,n);
	vectorHaciaDerecha(vector,n);
	cout<<"\nEl vector rotado por la derecha es: ";
	vectorImpreso(vector,n);
	
	return 0;
}