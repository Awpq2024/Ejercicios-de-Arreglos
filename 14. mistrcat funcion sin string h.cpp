#include <iostream>
using namespace std;

void mistrcat(char str1[],char str2[]){
	int longitud=0;
	while (str1[longitud]!='\0'){
		longitud++;
	}
	
	int i;
	for(i=0;str2[i]!='\0';i++){
		str1[longitud+i]=str2[i];
	}
	str1[longitud+i]='\0';
}

int main(){
	char str1[]="Primero, ";
	char str2[]="Segundo";
	
	cout<<"str1: "<<str1<<endl;
	cout<<"str2: "<<str2<<endl;
	mistrcat(str1,str2);
	cout<<"\nSe llama a la funcion mistrcat(str1,str2)"<<endl;
	cout<<"\nstr1: "<<str1;
	
	return 0;
}

