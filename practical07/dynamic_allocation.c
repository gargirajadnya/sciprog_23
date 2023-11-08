#include<stdio.h>
#include<stdlib.h>

/*
Understand the relation between arrays and pointers
A pointer is the address of a memory location of another variable of the same type
An array is the data structure in c used to store elements of the same type.  
In C, the name of an array is a pointer
*/

/* Defining functions*/

//Allocate Array
int *allocatearray(int n){
    int *p;
    p=(int *) malloc(n*sizeof(int));
    return p;
}

//Fill with ones
void fillwithones(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        array[i]=1;
    }
}

//Print array
void printarray(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        printf("a[%d]: %d\n", i, array[i]);
    }
}

//Deallocate array
void freearray(int *array){
    free(array);
}

/*Calling and using functions in main*/

int main(){
    int n, *a;
    printf("Size of array\n");
    scanf("%d",&n);

    a = allocatearray5(n);
    fillwithones(a,n);
    printarray(a,n);
    freearray(a);

    a=NULL;

    return 0;
}