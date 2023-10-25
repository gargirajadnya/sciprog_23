#include<stdio.h>
#include<stdlib.h>

//Fibonacci series

//declare function
//input arguments: Fn-1, Fn-2
//on exit- Fn and Fn-1

void fibonacci(int *a, int *b);

int main(){
    
    int n, i;
    int f0 = 0, f1 = 1;
    printf("Enter  apositive integer\n");
    scanf("%d", &n);

    if(n<1){
        printf("Number should be positive\n");
        exit(1);
    }

    printf("The fibonacci seq is: \n");
    printf("%d, %d, ", f0,f1);

    //Calculation of fibonacci seq
    for(i=2; i<=n; i++){
        fibonacci(&f1, &f0);
        printf("%d, ",f1);
        
        if((i+1)%10 == 0) printf("\n");
    }

    return 0;
}

void fibonacci(int* a, int *b){
    int next;
    //*a=fn-1, *b=fn-2 next=fn
    next = *a+*b;
    *b=*a;
    *a = next;

}