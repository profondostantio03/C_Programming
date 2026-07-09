#include <stdio.h>
#define N 10

void inputArray(int a[], int n){
    for(int i=0; i<n; i++) 
        scanf("%d", &a[i]);
}

void outputArray(int a[], int n){
    for(int i=0; i<n; i++)
        printf("%d", a[i]);
}

/*int minimo(int a[], int n){
    int min = 0;
    for(int i=1; i<n; i++){
        if(a[i]<a[min]) min=i;
    }
    return min;
}

void swap(int *a, int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void selectionSort(int a[], int n){
    for(int i=0; i < n-1; i++){
        int min = minimo(a+i, n-i);
        swap(&a[i], &a[min + i]);
    }
}*/

void selectionSort(int a[], int n){
    int i, j, min_idx, tmp;
    for(i=0; i<n-1; i++){
        min_idx = i;
        for(j=i+1; j<n; j++){
            if(a[j]<a[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            tmp=a[i];
            a[i]=a[min_idx];
            a[min_idx]=tmp;
        }
    }
}

int main(){
    int a[N], n=5;
    inputArray(a, n);
    selectionSort(a, n);
    outputArray(a, n);
}