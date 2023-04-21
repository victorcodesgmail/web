#include <stdio.c>

main()
{
    char firstinitial,middleinitial;
    int number_of_pens;
    int number_of_pencils;
    float pencils=0.4;
    float pens=0.12;
    firstinitial='J';
    middleinitial='R';
    number_of_pens='7';
    number_of_pencils='5';


printf("%c%c needs %d pens and %d\n", firstinitial,middleinitial, number_of_pencils,number_of_pens);
printf("The total cost is $%.2f\n\n" , number_of_pencils*pencils + number_of_pens*pens);
}