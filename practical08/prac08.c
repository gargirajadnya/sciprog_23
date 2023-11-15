#include<stdio.h>

//iteration
int gcd_iteration(int a, int b){
    int temp;
    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

//recursion
int gcd_recursive(int a, int b){
    if(b==0){
        return a;
    }
    else
    {
        return gcd_recursive(b,a%b);
    }
}

int main(void){
    int a;
    int b;
    printf("Enter a positive integer a\n");
    scanf("%d", &a);
    if(a<=0){
        printf("This is not a positive integer, please try again\n");
        printf("Enter a positive integer a\n");
        scanf("%d", &a);
        return 1;
    }
    printf("Enter a positive integer b\n");
    scanf("%d", &b);
    if(b<=0){
        printf("This is not a positive integer, please try again\n");
        printf("Enter a positive integer b\n");
        scanf("%d", &b);
    }

    int ans_i = gcd_iteration(a,b);
    int ans_r = gcd_recursive(a,b);
    printf("Answer with iteration: %d\nAnswer with recursion: %d\n", ans_i, ans_r);

    return 0;
}