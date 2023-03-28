#include <stdio.h>
#include <math.h>
#include <stdbool.h> //including this to add the boolean datatypes true and false, to make life easier later

int main(){
    double a,b,c;
    double root1, root2, d;
    printf("Enter the coefficients a, b and c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = (b*b) - (4*a*c);
    //here we check if d == 0,
    switch (d==0){
        //following code executes if d==0; i.e if the condidtion d==0 returns true
    case true:
        root1 = root2 = -(b/(2*a));
        printf("1st Root = 2nd Root = %.2lf\n", root1);
        break;

        //following code executes if d!=0; i.e if the condidtion d==0 returns false
    case false:
        //checking if d>0,
        switch (d>0){
            //following code executes if d>0; i.e if the condidtion d>0 returns true
        case true:
            root1 = ((-b + sqrt(d))/(2*a));
            root2 = ((-b - sqrt(d))/(2*a));
            printf("1st Root: %.2lf \n", root1);
            printf("2nd Root: %.2lf \n", root2);
            break;

            //following code executes if d!>0; i.e if the condidtion d>0 returns false
        case false:
            double rp = -(b/(2*a));
            double imp = sqrt((-d)/(2*a));

            printf("1st Root: %.2lf + i%.2lf\n", rp, imp);
            printf("2nd Root: %.2lf - i%.2lf\n", rp, imp);
            break;
        break;
        }
    }
    return 0;
