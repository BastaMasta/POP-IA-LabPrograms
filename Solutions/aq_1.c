 #include <stdio.h>
 #include <stdlib.h>


 int main()
 {
     float a, b, c;
     int n;
     char choice = 'y' ;


     do
     {
         printf("Please enter any number:\n");
             if (scanf("%f", &a)!=1){
                 fprintf(stderr, "error: first input must be a number\n");
                     return EXIT_FAILURE;}


         printf("Please choose any of the operator:\n");
         printf(" 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
             scanf(" %d", &n);


         printf("Please enter any number:\n");
             if (scanf("%f", &b)!=1){
                 fprintf(stderr, "error: second input must be a number\n");
                     return EXIT_FAILURE;}


         switch(n)
         {
             case 1 :
                 c = a + b;
                     printf("The answer is:%f\n", c);
             break ;

             case 2 :
                 c = a - b;
                     printf("The answer is:%f\n", c);
             break;

             case 3 :
                 c = a * b;
                     printf("The answer is:%f\n", c);
             break;

             case 4 :
                 c = a / b;
                     printf("The answer is:%f\n", c);
             break;

             default :
                     printf("You have not chosen the given operators\n");
             }

                     printf("would you like to try again? (y/n)\n");
                         scanf(" %c", &choice);
     }

     while( choice == 'y' || choice == 'Y');
         getch();


     return 0;
 }
