#include <stdio.h>
#include <string.h>
#include "consts.c"
#include "vars.c"

// Large plates availability
int redAvail;
int blueAvail;
int yellowAvail;
int greenAvail;
int whiteAvail;

// Small plates availability
int smRedAvail;
int smBlueAvail;
int smYellowAvail;
int smGreenAvail;
int smWhiteAvail;

// Bar type of M (20) or F (15)
char barType[1];
int currentBar = 0;


int getBarType()
{
    scanf("%s", barType);
    if (strcmp(barType, "F") == 0) {
        currentBar = femaleBar;
    }
    else {
        currentBar = maleBar;
    }

    return currentBar;
}


int main()
{
    // Choose male or female bar
    printf("Enter 'M' for the male 20kg bar or 'F' for the female 15kg bar: ");
    getBarType();
        printf("%d\n", currentBar);

    // 
    int kgOnBar;
    printf("Enter the desired weight on the bar: ");
    scanf("%d", &kgOnBar);
        printf("%d\n", kgOnBar);

    // Determine the amount of weight needed in plates
    int kgNeeded = kgOnBar - currentBar;
    printf("%d\n", kgNeeded);

    return 0;
}
