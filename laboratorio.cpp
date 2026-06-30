#include <iostream>
#include "lab.h"

using namespace std;

// Mensaje Pablo
// Mensaje desde rama interfaz

int main(){
	//int numeros[]={2,4,3,5,8,1};
	int numeros[]={20, 8, 4, 5, 7, 8, 9};
	
	int arreglo[]={10,12,11,4,8};
	
	const double euler = 2.7182;
	/*
	cout<<"Suma del arreglo: "<<sumaArreglo(numeros,6)<<endl;
	cout<<"Maximo del arreglo: "<<maximo(numeros,6)<<endl;
	cout<<"Valor de pi: "<<PI<<endl;//esta variable fue definida en header
	cout<<"Valor de euler: "<<euler<<endl;
	cuadradoArreglo(numeros, 6);//paso por referencia afecta al arreglo original
	imprimirArreglo(numeros, 6);
	*/
	
	cout<<"Elemento encontrado en la posicion numero: "<<busquedaLineal(numeros,6,20) <<endl;
	
	cout<<"Elemento encontrado en la posicion: "<<busquedaBinariaIterativa(numeros,6,20) <<endl;
	
	
	cout<<"Elemento encontrado en la posicion  : "<<busquedaBinariaRecursiva(numeros,6,20,0,5)<<endl;
	
	/*
	cout<<"Arreglo desordenado: "<<endl;
	imprimirArreglo(numeros,6);
	
	//bubbleSortDesc(numeros,5);
	//selectionSortDesc(numeros,5);
	//insertionSortDesc(numeros,6);
	//mergeSort(numeros,0,5);
	quickSort(numeros,0,5);
	
	
	
	cout<<"Arreglo ordenado: "<<endl;
	imprimirArreglo(numeros, 6);
*/
	
	return 0;
}



















