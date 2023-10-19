

/*        [1].Project work of coding club */
/*   .....Digital calculator.....*/
/* by-    Dheeraj kumar */
/*        CSE 2022-26*/


#include <stdio.h> 
#include <conio.h>  
#include <math.h>           /*For functions of power, sine, cosine, tangent*/

#include <windows.h>        /*For function of Sleep */

#include <time.h>           /*For time based modules and functions*/

#define PI 3.14159265358979323846    /*for more accurate values*/



/// @brief 
/// @return 
int main()
{   
    while(1)
    {
        Start:printf("welcome to digital calculator CalC");
   
system("COLOR F1");

    char operation;
int Input,even,even1,mode,s,fabonacci,Prime;
float Number1,Number2,answer,A,B,C,ratio,D,R1,R2;
printf("\nStarting......\n\nIn which claculation mode you want to use calculate\n\n");
printf("Input for following use:\n\n");
puts(" 1  DMAS and Power/ nRoots Calculation.");
puts(" 2  TRIGOMATRIC AND LOGARITHM Fucntion.");
puts(" 3  Random Mathematical Calulation.");
puts(" 4  Fabonacci series.");
puts(" 5  Prime number.");
puts(" 6  Even/Odd checking.");
puts(" 7  AC/Exit (All Clear).");
printf("\n\nyour Input: ");
scanf("%d",&Input);
if(Input==1){

 printf("Welcome to Normal maths operation Mode.\n ");
      
      printf("\nAVAILABLE SYMBOLS:\n\n+ for Addition\n- for Subtraction\n/ for Division\n* for Multiplication\n^ for Power function\n\\ for Rooting ");
      printf("\nYour input:");
      scanf(" %c", & operation);
     printf(" \nYour two numbers:( base at last)");
      scanf("%f%f", & Number1, & Number2);
      if (operation == '+') {
        answer = (Number1 + Number2);
        printf("Answer:\n%f  %c %f = % f \n\n", Number1, operation, Number2, answer);
          
      } 
      else if (operation == '-') {
        answer = (Number1 - Number2);

        printf("Answer:\n%f  %c %f = %f \n\n", Number1, operation, Number2, answer);
          
      } 
      
      else if (operation == '/') {
        answer = (Number1 / Number2);
        printf("Answer:\n%f  %c %f = %f \n\n", Number1, operation, Number2, answer);
          
      } 
      
      else if (operation == '*') {
        answer = (Number1 * Number2);
        printf("Answer:\n%f  %c * %f = %g \n\n", Number1, operation, Number2, answer);
          
      } 
      
      else if (operation == '^') {
        answer = (pow(Number1, Number2));
        printf("Answer:\n%f  %c / %f = %g \n\n", Number1, operation, Number2, answer);
          
      } 
      
      else if (operation == '\\')
       {
        answer = pow(Number2, 1 / Number1);
        even1 = Number1;
        even = even1 % 2;

        
        if (Number2 < 0) {
          system("COLOR B4");
          printf("Cannot root a negative number; ERROR  \a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (even == 0) {
          printf("Answer:\n%f root(%f) = - %f or + %f (to 5 decimal \n\n", Number1, Number2, answer, answer);
            
        } else if (!even == 0) {
          printf("Answer:\n%f root(%f) = + %f \n\n", Number1, Number2, answer);
            
        }
      } else {
        system("COLOR B4");
        printf("\n\nYour input operator is incorrect: ERROR \n");
        printf("\a\n");
        system("pause");
        system("cls");
        system("COLOR F1");
      }

}
else if(Input==2)
{

 printf("Welcome to following Functions Mode.\n\n1 Sine Function.\n2 Cosine Function.\n3 Tangent Function.\n4 Log(10)N.\n5 Log(e)N\n6 Log(A)N.\n7 Sine Inverse Function.\n8 Cosine Inverse Function.\n9 Tangent Inverse Function.\n10 Quadratic Equation Solver.\n\nWhich Mode do you want: ");
      scanf("%d", & mode);
      if (mode == 1) {
        printf("Your angle(degree): ");
        scanf("%f", & Number1);
        answer = (sin(Number1 * PI / 180));
        printf("\nAnswer:\nSine(%f) = %fn\n", Number1, answer);
          
      } else if (mode == 2) {
        printf("Your angle(degree): ");
        scanf("%f", & Number1);
        answer = (cos(Number1 * PI / 180));
        printf("Answer:\nCosine(%f) = %f \n\n", Number1, answer);
          
      } else if (mode == 3) {
        printf("Your angle(answer): ");
        scanf("%f", & Number1);
        answer = (tan(Number1 * PI / 180));
        printf("Answer:\nTangent(%f) = %f \n\n", Number1, answer);
          
      } else if (mode == 4) {
        printf("Your number: ");
        scanf("%f", & Number1);
        answer = log10(Number1);
        if (Number1 < 0) {
          system("COLOR B4");
          printf("Cannot log a negative number; ERROR \a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Number1 == 0) {
          system("COLOR B4");
          printf("Cannot log(0); ERROR \a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Number1 > 0) {
          printf("Answer:\nLog(%f) = %f \n\n", Number1, answer);
            
        }
      } else if (mode == 5) {
        printf("Your number: ");
        scanf("%f", & Number1);
        answer = log(Number1);
        if (Number1 < 0) {
          system("COLOR B4");
          printf("Cannot ln a negative number; ERROR 1 Sintek\n\a");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Number1 == 0) {
          system("COLOR B4");
          printf("Cannot ln(0); Error \a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Number1 > 0) {
          printf("Answer:\nLoge(%f) = %f \n\n", Number1, answer);
            
        }
      } else if (mode == 6) {
        printf("Enetr N then A as log(A)N:");
        scanf("%f%f", & Number1, & Number2);
        answer = (log(Number2) / log(Number1));
        if (Number1 <= 0 || Number2 <= 0) {
          system("COLOR B4");
          printf("Cannot log a negative/zero base/number; ERROR 1 Sintek\n\a");
          system("pause");
          system("cls");
          system("COLOR F1");
        } else if (Number1 > 0 && Number2 > 0) {
          printf("Answer:\nLog[base %f]%f = %f \n\n", Number1, Number2, answer);
            
        }
      } else if (mode == 7) {
        printf("1 Entering hypotenuse and opposite side of triangle.\n2 Entering the value directly.\n\nYour option: ");
        scanf("%d", & s);
        if (s == 1) {
          printf("Enter hypotenuse and opposite sides of the triangle: ");
          scanf("%f%f", & Number1, & Number2);
          ratio = Number2 / Number1;
          if (ratio < -1 || ratio > 1) {
            system("COLOR B4");
            printf("The opposite side should not be larger than the hypotenuse side. Please recheck your values!\nERROR \n\a");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            answer = (asin(ratio));
            printf("Sine inverse %f/%f =\n%f (In radians)", Number2, Number1, answer);
            answer = answer * 180 / PI;
            printf("\n%f (In degrees)", answer);
              
          }
        } else if (s == 2) {
          printf("Enter your value: ");
          scanf("%f", & ratio);
          if (ratio < -1 || ratio > 1) {
            system("COLOR B4");
            printf("Value cannot be higher than 1/lower than -1. Please recheck your input!\nERROR \n\a");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            answer = (asin(ratio));
            printf("Sine inverse %f =\n%f (In radians)", ratio, answer);
            answer = answer * 180 / PI;
            printf("\n%f (In degrees)", answer);
              
          }
        } else if (s != 1 || s != 2) {
          system("COLOR B4");
          printf("Your input option is not found! ERROR 404\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      } else if (mode == 8) {
        printf("1 Entering adjacent and hypotenuse of triangle.\n2 Entering the value directly.\n\nYour option: ");
        scanf("%d", & s);
        if (s == 1) {
          printf("Enter adjacent and hypotenuse sides of the triangle: ");
          scanf("%f%f", & Number1, & Number2);
          ratio = Number1 / Number2;
          if (ratio < -1 || ratio > 1) {
            system("COLOR B4");
            printf("The adjacent side should not be larger than the hypotenuse side. Please reckeck your values!\nERROR \a\n");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            answer = (acos(ratio));
            printf("Cosine inverse %f/%f =\n%f (In radians)", Number1, Number2, answer);
            answer = answer * 180 / PI;
            printf("\n%f (In degrees)", answer);
              
          }
        } else if (s == 2) {
          printf("Enter your value: ");
          scanf("%f", & ratio);
          if (ratio < -1 || ratio > 1) {
            system("COLOR B4");
            printf("Value cannot be higher than 1/lower than -1. Please recheck your input!\nERROR \a\n");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            answer = (acos(ratio));
            printf("Cosine inverse %f = \n%f (In radians)", ratio, answer);
            answer = answer * 180 / PI;
            printf("\n%f (In degrees)", answer);
              
          }
        } else if (s != 1 || s != 2) {
          system("COLOR B4");
          printf("Your input option is not found! Error \a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      } else if (mode == 9) {
        printf("1 Entering opposite and adjacent of triangle.\n2 Entering the value directly.\n\nYour option: ");
        scanf("%d", & s);
        if (s == 1) {
          printf("Enter opposite and adjacent sides of the triangle: ");
          scanf("%f%f", & Number1, & Number2);
         ratio = Number1 / Number2;
          answer = (atan(ratio));
          printf("Tangent inverse %f/%f =\n%f (In radians)", Number1, Number2, answer);
          answer = answer * 180 / PI;
          printf("\n%f (In degrees)", answer);
            
        } else if (s == 2) {
          printf("Enter your value: ");
          scanf("%f", & ratio);
          if (ratio < -1 || ratio > 1) {
            system("COLOR B4");
            printf("Value cannot be higher than 1/lower than -1. Please recheck your input!\nERROR \a\n");
            system("pause");
            system("cls");
            system("COLOR F1");
          } else {
            answer = (atan(ratio));
            printf("Tangent inverse %f =\n%f (In radians)", ratio, answer);
            answer *= 180 / PI;
            printf("\n%f (In degrees)", answer);
              
          }
        } else if (s != 1 || s != 2) {
          system("COLOR B4");
          printf("Your input option is not found! ERROR 404\a\n");
          system("pause");
          system("cls");
          system("COLOR F1");
        }
      } else if (mode == 10) {
        printf("Welcome to Quadratic Equation root finder. Enter the coefficient of X^2, followed by\nthe coefficient of X, followed by the integer value.\n\nEnter values: ");
        scanf("%f%f%f", &A, &B, &C);
        ratio = (B * B - 4 * A * C);
        if (A == 0) {
          answer = -C/B;
          printf("Root of equation is %f \n", answer);
            
      } else if (ratio < 0) {
          system("COLOR B4");
          printf("This calculator , currently cannot handle complex numbers.\n I will now redirect you to the main menu.\n");
          system("pause");
          system("cls");
          system("COLOR F1");
          goto Start;
        } else if (ratio >= 0) {
            D  = pow(ratio, 0.5);
            R1 = (-B + D)/(2*A);
            R2 = (-B - D)/(2*A);
          if (R1 == R2) {
            answer = R1;
            printf("\nRoot of equation is %f (Repeated root)\n", answer);
              
          } else if (R1 != R2) {
            printf("Roots of equation are %f and %f \n", R1, R2);
              
          }
        }
      } 
      else {
        system("COLOR B4");
        printf("Your input option is not found! ERROR 404\a\n");
        system("pause");
        system("cls");
        system("COLOR F1");



      }}
else if(Input==3){  
    printf(" Sorry for inconvenient.\n\n This mode is not working right now.\nplease....\nTry out in other mode");
    printf("Exiting to main menu, in 2 seconds.");
            Sleep(2000);
            system("COLOR F1");
            goto Start;

}
else if(Input==4)

{
    printf("\nwelcome to fabonacci series mode.\n\n");

     printf("Enter fabonacci sequence up to: ");
         scanf("%d",&fabonacci);
         if (fabonacci==0)

           {   answer=0;
               printf("fabonacci sequence at 0: %d\n",0);
            }
     
    else  if (fabonacci==1)
         {   answer=1; 
              printf("fabonacci sequence at 1: %f\n",answer);
           }
   else 
  {
        int answer=0;
        int Number1=1;
        int Number2=0;
      printf("fabonacci sequence at 0: %d\n",0);
      printf("fabonacci sequence at 1: %d\n",1);
      for(int i=2;i<=fabonacci;i++)
    {    { 
            answer=Number1 + Number2;
            
            
            Number2=Number1; 
            Number1=answer;
         }
        printf("fabonacci sequence at %d: %d\n",i,Number1);
    }
  }

       printf("Exiting to main menu, in 2 seconds.");
            Sleep(2000);
            system("COLOR F1");
            goto Start;
}
else if (Input==5){

printf("\t\tWELCOME TO PRIME NUMBER VALUE FINDER\n\n");
printf("Choose the following.\n 1 For check the number is prime.\n 2 For getting Prime number up to N number\nInput your option: ");
scanf("%d",&Prime);
if(Prime==1){
  
     
 int c=0,prime;
         
         printf("\nInput the number:");
         scanf("%d",&prime);

        for(int j=1;j<=prime;j++)
        {
            if(prime%j==0)
            {
                c++;
            }
        }    
       if(c==2)
        {
            printf("%d is Prime Number. ",prime);
             printf("Exiting to main menu, in 2 seconds.");
            Sleep(2000);
            system("COLOR F1");
            goto Start;
        }
        else {
          printf("%d is not a Prime Number.",prime);
           printf("\n\nExiting to main menu, in 2 seconds.");
            Sleep(2000);
            system("COLOR F1");
            goto Start;
          
        }


}
else if(Prime==2){

int prime,j,n;  
    printf("Enter the number till which you want prime numbers: ");
    scanf("%d",&n);
    printf("\nPrime numbers %d are:-\n",n);    
    for(prime=2;prime<=n;prime++)
    {
        int c=0;
        for(j=1;j<=prime;j++)
        {
            if(prime%j==0)
            {
                c++;
            }
        }    
       if(c==2)
        {
            printf("%d ",prime);
        }
    }




}
else{
  
     printf(".......You have choose wrong option.\n.........Error......\n");
     

            printf("Exiting to main menu, in 2 seconds.");
            Sleep(2000);
            system("COLOR F1");
            goto Start;

}


}
else
if(Input==6){ int a;
  printf("welcome Even/Odd checking unit.\n");
  printf("Input your number:");
  scanf("%d",&a);
  
  
  if(a%2==0){
    if(a>0)
    printf("\n%d is Even number.\n\n",a);
    else printf("\n%d is Negative Even number.\n\n",a);
  }
  else {

  if (a>0)
   printf("\n%d is Odd number.\n\n",a);
   else
   printf("\n%d is Negative Odd number.\n\n",a);
  
  }
}

 else if(Input==7)

{// for exits (all clear)
          printf("\t\tThank you for using my calculator CalC.\n\n\t\t Hope to see you again!!");
  Sleep(1250);
  system("cls");
  system("COLOR 0F");
  exit(0);
    } 

    else if (Input <= 1 || Input >=6) 
    {
      system("COLOR B4");
      printf("Your option is not found! ERROR \a\n");
      
      system("pause");
      system("cls");
      system("COLOR F1");
    }


}
return 0;
}



