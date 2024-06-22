#include "library.h" // get_bar_type and plates_needed functions
#include "plates.h"  //
#include <stdio.h>

// Bar type of M (20) or F (15)
char bar_type[1];
int current_bar = 0;

int main() {
  /*
   * Choose male or female bar and return the weight of the barbell itself by
   * calling get_bar_type
   */
  printf("Enter 'M' for the male 20kg bar or 'F' for the female 15kg bar: ");
  current_bar = get_bar_type(bar_type, current_bar, female_bar, male_bar);

  printf("%d\n", current_bar);

  // Input the amount of weight to load onto the bar
  double kg_loaded;
  printf("Enter the desired weight on the bar: ");
  scanf("%lf", &kg_loaded);
  printf("Weight loaded (kg): ");
  printf("%lf\n", kg_loaded);

  // Determine the amount of weight needed in plates
  double kg_needed = kg_loaded - current_bar;
  printf("%lf\n", kg_needed);

  return 0;
}
