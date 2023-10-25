#include<stdio.h>
#include<math.h>

double arctan1(const double x, const double delta);
double arctan2(const double x);
int main(){

    double delta, x;
    printf("Enter precision for the MacLauren series:\n");
    scanf("%lf", &delta);

    int length = 1000;
    //storing the result of arctan1
    double tan1[length];
    //storing the result of arctan2
    double tan2[length]; 

    //array index
    int j=0;
    x = -0.9;
    while(x<0.9 && j<length){
        tan1[j]=arctan1(x, delta);
        tan2[j]=arctan2(x);
        printf("The diff at x=%lf between them is %.10lf.\n", x, fabs(tan1[j]-tan2[j]));
        j++;

        //can try with 0.01
        x = x+0.1;
    }

    return 0;
}

double arctan1(const double x, const double delta){
    //approximation
    double arcTan = 0;
    //element in the series 
    double elem, val;
    //sum parameter
    int n = 0;
    do{

        val = 2*n+1;
        elem = pow(x, val)/val;
        arcTan += elem;
        n++;
    } while(fabs(elem)>= delta);

return arcTan;

}


double arctan2(const double x){
    return(log(1+x)-log(1-x))/2;
}