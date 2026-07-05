#include <stdio.h>
#define N 10

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void bubbleSort(int a[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(a[j]>a[j+1]) swap(&a[j], &a[j+1]);
        }
    }
}

void inputArray(int a[], int n){
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void outputArray(int a[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int main(){
	int a[N], n = 5, val;
	inputArray(a, n);
	bubbleSort(a, n);
	outputArray(a, n);
}