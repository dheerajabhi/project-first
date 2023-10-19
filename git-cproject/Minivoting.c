

/*        [2].Project work of coding club */
/*   .....Mini voting system.....*/
/* by-    Dheeraj kumar */
/*        CSE 2022-26*/




#include <stdio.h>

#include <windows.h> //For function Sleep()

#include <math.h> //For functions like pow(), sin(), cos(), tan()

#include <time.h> //For time based modules and functions

#include <conio.h> //For kbhit, input detector

/// @brief 
int main()
{

    system("COLOR F1");

    int i=1,Vote, party_A = 0, party_B = 0, party_C = 0, party_D = 0,invalid=0;

    system("cls");

    printf("\n\t\tElection 2023\n\n\tYour Vote is too Pricious.\n\n\tPlease give Enroll your vote.\n ");

    while (1)
    {
printf("\nVote sequence number is %d\n",i++);
    printf("**********Enroll Your vote***********\n\n");
        printf("Press 1 to vote party_A\n");
        printf("Press 2 to vote party_B\n");
        printf("Press 3 to vote party_C\n");
        printf("Press 4 to vote party_D\n\n");
        printf("***************************************\n\n");
       
       printf("Press 5 to show election result\n");
        printf("press 6 to close voting\n\n");

        printf("Please Enroll your response : ");
        scanf("%d", &Vote);
        printf("\n\n");

     {  switch (Vote)
        {
        case 1:
            party_A++;
            break;
        case 2:
            party_B++;
            break;
        case 3:
            party_C++;
            break;
        case 4:
            party_D++;
            break;
        case 5:
       {
            if(party_A>=party_B && party_A>=party_C && party_A>=party_D)
   {  printf("***************************************\n\n");
    printf("\nparty_A has won the election.\n\n");

printf("Votes of individual parties are:\n");
         printf("party_A got %d votes.\n",party_A);
         printf("party_B  got %d votes.\n",party_B);
         printf("party_C  got %d votes.\n",party_C);
         printf("party_D  got %d votes.\n",party_D);
 printf("Total %d votes got Enrolled. \n%d votes are invalid.\n",i-2,invalid);
    printf("***************************************\n\n");
   }
    
    else if(party_B>=party_A && party_B >=party_C && party_B>=party_D)
   { printf("***************************************\n\n"); 
    printf("\nparty_B has won the election.\n\n");

printf("Votes of individual parties are:\n");
         printf("party_A got %d votes.\n",party_A);
         printf("party_B  got %d votes.\n",party_B);
         printf("party_C  got %d votes.\n",party_C);
         printf("party_D  got %d votes.\n",party_D);
 printf("Total %d votes got Enrolled. \n%d votes are invalid.\n",i-2,invalid);
    printf("***************************************\n\n");

   }
else if(party_C>=party_B && party_C>=party_A && party_C>=party_D)
  {
     printf("***************************************\n\n");
      printf("\nparty_C has won the election.\n\n");

printf("Votes of individual parties are:\n");
         printf("party_A got %d votes.\n",party_A);
         printf("party_B  got %d votes.\n",party_B);
         printf("party_C  got %d votes.\n",party_C);
         printf("party_D  got %d votes.\n",party_D);
 printf("Total %d votes got Enrolled. \n%d votes are invalid.\n",i-2,invalid);
   printf("***************************************\n\n");}
  else  if(party_D>=party_B && party_D>=party_C && party_D>=party_A)
    {
         printf("***************************************\n\n");
         printf("\nparty_D has won the election.\n\n");

         printf("Votes of individual parties are:\n");
         printf("party_A got %d votes.\n",party_A);
         printf("party_B  got %d votes.\n",party_B);
         printf("party_C  got %d votes.\n",party_C);
         printf("party_D  got %d votes.\n",party_D);
      printf("Total %d votes got Enrolled. \n %d votes are invalid.\n",i-2,invalid);
     printf("***************************************\n\n");
     }
    else { printf("***************************************\n\n");
        printf("\nN0 party have got majority.\n\n");

        printf("Votes of individual parties are:\n");
         printf("party_A got %d votes.\n",party_A);
         printf("party_B  got %d votes.\n",party_B);
         printf("party_C  got %d votes.\n",party_C);
         printf("party_D  got %d votes.\n",party_D);
         printf("Total %d votes got Enrolled. \n %d votes are invalid.\n",i-2,invalid);

     printf("***************************************\n\n");
     }
      }
            break;
        case 6:
            { printf("\n\nThank you for using my calculator.\n\t\t Hope to see you again!!\n");
    Sleep(1250);
    system("cls");
    system("COLOR 0F");
    exit(0);}
            break;

        default:

          { invalid++;
            
             system("COLOR B4");
            printf("Your option is not found! \n");
            printf("\t\t ERROR\n|please Vote valid candicate.");
            printf("\a\n");
            system("pause");
            system("cls");
            system("COLOR F1");
          }
            break;
            
        }
     
    
    
    }
    }
}

