#include "consts.h" //
#include "vars.h"   //
#include <stdio.h>
#include <string.h>

// Large plates availability
int redAvail = 4;
int blueAvail = 4;
int yellowAvail = 2;
int greenAvail = 4;
int whiteAvail = 2;

// Small plates availability
int smRedAvail = 2;
int smBlueAvail = 2;
int smYellowAvail = 2;
int smGreenAvail = 2;
int smWhiteAvail = 2;

// Bar type of M (20) or F (15)
char barType[1];
int currentBar = 0;

int getBarType() {
  scanf("%s", barType);
  if (strcmp(barType, "F") == 0) {
    currentBar = femaleBar;
  } else {
    currentBar = maleBar;
  }

  return currentBar;
}

int main() {
  // Choose male or female bar and return the weight of the barbell itself by
  // calling getBarType
  printf("Enter 'M' for the male 20kg bar or 'F' for the female 15kg bar: ");
  getBarType();

  printf("%d\n", currentBar);

  // Input the amount of weight to load onto the bar
  int kgOnBar;
  printf("Enter the desired weight on the bar: ");
  scanf("%d", &kgOnBar);
  printf("%d\n", kgOnBar);

  // Determine the amount of weight needed in plates
  int kgNeeded = kgOnBar - currentBar;
  printf("%d\n", kgNeeded);

  printf("Modulo work?");
  int someVar = (redVal * 2) % 40;
  printf("%d", someVar);

  return 0;
}
