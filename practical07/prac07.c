#include<stdio.h>
#include<math.h>
#include<stdlib.h>

/* dynamically allocated arrays */

//find e using taylor series when x=1

int factorial(int n);

int main(void){
    int i, order;
    double e, *terms;

    //Polynomial order
    printf("\nEnter the required polynomial order\n");
    if(scanf("%d",&order)!=1){
        printf("Didn't enter a number\n");
        return 1;
    }

    //Allocate space depending on n
    terms = malloc(order*sizeof(double));
    for(i=0; i<order; i++){
        terms[i]=1.0/(double)factorial(i+1);
        printf("e term for order %d is: %1.14lf\n", i+1, terms[i]);
    }
    
    e = 1.0;
    for(i=0; i<order; i++){
        e=e+terms[i];
    }

    //to free your space, use the next line of code
    free(terms);

    //Let's print the value for e
    printf("\n\nEstimated e = %.10lf \nThe difference between true value of e and estimated e is %e\n\n", 
    e, e-exp(1.0));   //exp function is available in math library

    return 0;
}

int factorial(int n){
    if (n<0){
        printf("Error, negative number is passed to factorial.\n");
        return (-1);
    }
    else if(n==0){
        return 1;
        }
    else{
        return (n*factorial(n-1));
        }
}



/*
Why doe sthe estimate get worse with increase in order?
bc we are dealing with integers
integer overflow
*/