#include <iostream>
using namespace std;

int pivot_bul(int dizi[],int bas, int son){
	int pivot = dizi[son];
	int i = bas-1;
	for(int j = bas; j<son; j++){
		if(dizi[j]<pivot){
			i++;
			int temp = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = temp;
		}
	}
	
	int temp = dizi[i+1];
	dizi[i+1] = dizi[son];
	dizi[son] = temp;
	
	return i+1;
	
}


void quicksort(int dizi[],int bas ,int son){
	if(bas<son){
		int pivot = pivot_bul(dizi,bas,son);
		
		quicksort(dizi,bas,son-1);
		quicksort(dizi,bas+1,son);
	}
}

int main(){
	int dizi[5] = {7,9,2,3,4};
	int boyut = sizeof(dizi)/sizeof(dizi[0]);
	quicksort(dizi,0,boyut-1);
	for(int i = 0; i<boyut;i++){
		cout<<dizi[i]<<" ";
	}
	
}
