#include <stdio.h>
#include <stdlib.h>
//if you plan to use exit you must use this function

int main()
{
    int choice1;
    int choice2;

    printf("What wouold you like to see?\n");
    printf("1. markets\n");
    printf("2. placenames\n");
    printf("3. religious denominations\n");
    printf("4. Quit\n");

    printf("Enter your choice\n");
    scanf("%d",&choice1);
    switch(choice1)
    {
        case (1):
        {
            printf("\n\n\nWhat would you like to see\n");
            printf("1. kambi\n");
            printf("2. Timau\n");
            printf("3. Meru\n");
            printf("4. Quits\n");

            printf("Enter your choice\n");
            scanf("%d",&choice2);

            if (choice2==1)
            {
                printf("shops\n");
                printf("policestatiion\n");
                printf("agrovet\n");
                printf("hospital\n");
                printf("\n\n\n0");
                break;
            }
            else if(choice2==2)
            {
                   printf("shops\n");
                printf("statiion\n");
                printf("vet\n");
                printf("hosp\n");
                printf("\n\n\n0");
                break;
            }
            else if(choice2==3)
            {
                   printf("shops\n");
                printf("policestatiion\n");
                printf("agrovet\n");
                printf("hospital\n");
                printf("\n\n\n0");
                break;
            }
            else if(choice2==4)
            {
                exit(1);
            }
            else
            {
                printf("Sorry that is not a valid choice\n");
                break;
            }
        }

case (2):
{
   printf("\n\n\nWhat would you like to see\n");
            printf("1. kambi\n");
            printf("2. Timau\n");
            printf("3. Meru\n");
            printf("4. Quits\n");

printf("Enter your choice\n");
scanf("%d",&choice2);

if (choice2==1)
{
    printf("dentist\n");
     printf("church\n");
      printf("nsary\n");
       printf("farm\n");
}
else if (choice2==1)
{
    printf("vvvvvvv\n");
    printf("vvvvvvv\n") ;
     printf("vvvvvvv\n");
      printf("vvvvvvv\n");
}

}
    }
}