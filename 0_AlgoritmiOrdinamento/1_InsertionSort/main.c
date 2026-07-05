#include <stdio.h>
#define N 10

void insertionSort(int a[], int n){
    int i, j, val;
    for(i=1; i<n; i++){
        val=a[i];
        for(j=i; j>0 && a[j-1]>val; j--){
            a[j]=a[j-1];
        }
        a[j] = val;
    }
}

void inputArray(int a[], int n){
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void outputArray(int a[], int n){
    for(int i=0; i<n; i++)
        printf("%d", a[i]);
}

int main(){
    int a[N], n=5, val;
    inputArray(a, n);
    insertionSort(a, n);
    outputArray(a, n);
}