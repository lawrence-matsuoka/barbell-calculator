#include "library.h" // get_bar_type and plates_needed functions
#include "plates.h"  // struct, consts, and vars
#include <stdio.h>

// Bar type of M (20) or F (15)
char bar_type[1];
int current_bar = 0;

const int male_bar = 20;
const int female_bar = 15;

int main() {
  //
  printf("Enter 'M' for the male 20kg bar or 'F' for the female 15kg bar: ");
  current_bar = get_bar_type(bar_type, current_bar, female_bar, male_bar);
  printf("Weight of bar itself: %d\n", current_bar);

  // Input the amount of weight to load onto the bar
  double kg_loaded;
  printf("Enter the desired weight on the bar: ");
  scanf("%lf", &kg_loaded);
  printf("Weight loaded (kg): %lf\n", kg_loaded);

  // Determine the amount of weight needed in plates
  double kg_needed = kg_loaded - current_bar;
  printf("Weight needed: %lf\n", kg_needed);

  // 
  for (int i = 0; i < plate_count; i++) {
    int result = plates_needed(kg_needed, plates[i].val, plates[i].avail,
                               plates[i].count);
    printf("%s: %d\n", plates[i].name, result);
    plates[i].avail -= result;
    kg_needed -= result * plates[i].val;
  }

  return 0;
}
