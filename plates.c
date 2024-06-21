#include "plate_info.h"  // 
#include "library.h"  //
#include <stdio.h>

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

// Count of plates used
int red_count = 0;
int blue_count = 0;
int yellow_count = 0;
int green_count = 0;
int white_count = 0;

int sm_red_count = 0;
int sm_blue_count = 0;
int sm_yellow_count = 0;
int sm_green_count = 0;
int sm_white_count = 0;

// Bar type of M (20) or F (15)
char bar_type[1];
int current_bar = 0;

int main() {
  /*
   * Choose male or female bar and return the weight of the barbell itself by
   * calling get_bar_type
   */
  printf("Enter 'M' for the male 20kg bar or 'F' for the female 15kg bar: ");
  get_bar_type();

  printf("%d\n", current_bar);

  // Input the amount of weight to load onto the bar
  int kg_loaded;
  printf("Enter the desired weight on the bar: ");
  scanf("%d", &kg_loaded);
  printf("Weight loaded (kg): ");
  printf("%d\n", kg_loaded);

  // Determine the amount of weight needed in plates
  int kg_needed = kg_loaded - current_bar;
  printf("%d\n", kg_needed);

  int red_result = plates_needed(kg_needed, red_val, red_avail, red_count);
  printf("Reds: %d\n", red_result);

  red_avail = red_avail - red_result;

  kg_needed = kg_needed - red_result * red_val;
  printf("%d", kg_needed);
}
