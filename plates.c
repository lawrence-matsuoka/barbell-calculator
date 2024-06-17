#include "plateInfo.h"   //
#include <stdio.h>
#include <string.h>


// Large plates availability
int red_avail = 4;
int blue_avail = 4;
int yellow_avail = 2;
int green_avail = 4;
int white_avail = 2;

// Small plates availability
int sm_red_avail = 2;
int sm_blue_avail = 2;
int sm_yellow_avail = 2;
int sm_green_avail = 2;
int sm_white_avail = 2;

// Bar type of M (20) or F (15)
char bar_type[1];
int current_bar = 0;

int get_bar_type() {
  scanf("%s", bar_type);
  if (strcmp(bar_type, "F") == 0) {
    current_bar = female_bar;
  } else {
    current_bar = male_bar;
  }

  return current_bar;
}

int main() {
  // Choose male or female bar and return the weight of the barbell itself by
  // calling getBarType
  printf("Enter 'M' for the male 20kg bar or 'F' for the female 15kg bar: ");
  get_bar_type();

  printf("%d\n", current_bar);

  // Input the amount of weight to load onto the bar
  int kg_loaded;
  printf("Enter the desired weight on the bar: ");
  scanf("%d", &kg_loaded);
  printf("%d\n", kg_loaded);

  // Determine the amount of weight needed in plates
  int kg_needed = kg_loaded - current_bar;
  printf("%d\n", kg_needed);

  printf("Modulo work?");
  int some_var = (red_val * 2) % 40;
  printf("%d", some_var);

  return 0;
}
