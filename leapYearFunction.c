/*
Names: Bruhathi Challapalli, Mei Wong

2000 is a leap year
4000 is a leap year
4004 is a leap year
3200 is a leap year
1999 is not a leap year
1900 is not a leap year
1000 is not a leap year

*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define START_OF_GREGORIAN_CALENDAR 1582
#define TRUE 1
#define FALSE 0

int isLeapYear (int year);

int main (int argc, char *argv[]){

    int year;

    printf("Please enter the year you're interested in \n");
    scanf("%d", &year);


    assert(year > START_OF_GREGORIAN_CALENDAR);

    if (isLeapYear(year) == TRUE) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);

    }
    return EXIT_SUCCESS;
}


int isLeapYear (int year){
    if (year%4 == 0 ) {
        if (year % 100 == 0) {
            if (year % 400 == 0){
                return TRUE;
            } else {
                return FALSE;
            }
        } else {
            return TRUE;
        }
    } else {
        return FALSE;
    }
}