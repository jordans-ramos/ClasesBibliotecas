#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

int busquedaLineal(int arr[], int n, int objetivo){
	for(int i=0; i<n; i++){
		if(arr[i]==objetivo)return i;
	}
	return -1;
}



int busquedaBinariaIterativa(int arr[], int n, int objetivo){
	int inicio = 0, fin = n-1, mit;
	
	while(inicio<=fin){
		mit = (inicio + fin)/2;
		if(arr[mit]==objetivo)return mit;
		if(arr[mit]<objetivo)inicio= mit+1;
		else fin = mit-1;
	}
	return -1;
}



int busquedaBinariaRecursiva(int arr[], int n, int objetivo, int inicio, int fin){
	
	if(inicio>fin)return -1;
	
	int mit=(inicio+fin)/2;
	if (arr[mit]==objetivo) return mit;
	if (arr[mit]<objetivo)inicio=mit+1;
	else fin=mit-1;
	
	return busquedaBinariaRecursiva(arr,n,objetivo,inicio,fin);
	
}


int imprimirArreglo(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

void bubbleSortDesc(int arr[], int n){
	int aux;
	for(int i=0; i<n-1;i++){
		for(int j=0; j<n-i-1;j++){
			if(arr[j]< arr[j+1]){
				aux=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=aux;
			}
		}
	}
}

void selectionSortDesc(int arr[], int n){
	int max, maxIdx;
	for(int i=0; i<n-1;i++){//recorrer
		max=arr[i];
		maxIdx = i;
		for(int j=i+1; j<n;j++){
			if(arr[j]>max){
				max=arr[j];
				maxIdx = j;
			}
		}
		arr[maxIdx] = arr[i];
		arr[i] = max;
	}
}

void insertionSortDesc(int arr[], int n){
	int aux;
	for(int i=n-2; i>-1; i--){
		int j=i+1;
		aux =arr[i];
		while(arr[j] > aux && j<n){
			arr[j-i]=arr[j++];
		}
		arr[j-1]=aux;
	}
}
/*
void insertionSortDesc(int arr[], int n){
	int aux;
	for(int i=0; i<n; i++){
		int j=i-1;
		aux =arr[i];
		while(arr[j] < aux && j!=-1){
			arr[j+1]=arr[j--];
			//j--;
		}
		arr[j+1]=aux;
	}
}
*/

void mergeSort(int arr[], int inicio, int fin){
	int mit=(inicio+fin)/2;
	
	if(inicio>=fin)return;
	
	mergeSort(arr, inicio, mit);
	mergeSort(arr,mit+1,fin);	
	
	merge(arr, inicio, mit, fin);
}

void merge(int arr[], int inicio, int mitad, int fin){
	int i, j=0, k=inicio;
	int n1 = mitad-inicio+1;
	int n2 = fin-mitad;
	
	int *arrIzq =(int *) malloc(n1*4);
	int *arrDer =(int *) malloc(n2*4);
	
	for(i=0;i<n1;i++)arrIzq[i] = arr[inicio+i];
	
	for(i=0;i<n2;i++)arrDer[i] = arr[mitad+i+1];
		
	i=0;
	
	while(i<n1 && j<n2){
		if(arrIzq[i] <= arrDer[j]){
			arr[k] = arrIzq[i];
			i++;
		}else{
			arr[k]=arrDer[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)arr[k++] = arrIzq[i++];
	
	while(j<n2)arr[k++] = arrDer[j++];
	
	free(arrIzq);
	free(arrDer);
}

void quickSort(int arr[], int inicio, int fin){
	int posPivote;
	if(inicio>=fin)return;
	posPivote = particionar(arr, inicio,fin);
	
	quickSort(arr, inicio, posPivote-1);
	quickSort(arr,posPivote+1,fin);
	
}

int particionar(int arr[], int inicio, int fin){
	int pivote = arr[fin];
	int i = inicio-1;
	for(int j=inicio; j<fin; j++){
		if(arr[j]<=pivote)intercambiar(arr[++i], arr[j]);
	}
	intercambiar(arr[++i],arr[fin]);
//	imprmirArreglo(arr,fin);
	return i;	
}

void intercambiar(int &a, int &b){
	int aux=a;
	a=b;
	b=aux;
}

void complejidadConstante(int arr[]){
	// Complejidad O(3)
	arr[0] += arr[1];
	arr[1] += arr[2];
	arr[2] += arr[3];
}

void complejidadLineal(int arr[]){
	
}

































