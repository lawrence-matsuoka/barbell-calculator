#include "library.h"    // get_bar_type and plates_needed functions
#include "plate_info.h" //
#include <stdio.h>

// Compile libraries by running `gcc -o <output> main.c library1.c library2.c`

// Large plates availability
int red_avail = 2;
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
  current_bar = get_bar_type(bar_type, current_bar, female_bar, male_bar);

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

  // Is there a better way to write this?
  int red_result = plates_needed(kg_needed, red_val, red_avail, red_count);
  printf("Reds: %d\n", red_result);
  red_avail = red_avail - red_result;
  kg_needed = kg_needed - (red_result * red_val);

  int blue_result = plates_needed(kg_needed, blue_val, blue_avail, blue_count);
  printf("Blues: %d\n", blue_result);
  blue_avail = blue_avail - blue_result;
  kg_needed = kg_needed - (blue_result * blue_val);

  int yellow_result =
      plates_needed(kg_needed, yellow_val, yellow_avail, yellow_count);
  printf("Yellows: %d\n", yellow_result);
  yellow_avail = yellow_avail - yellow_result;
  kg_needed = kg_needed - (yellow_result * yellow_val);

  int green_result =
      plates_needed(kg_needed, green_val, green_avail, green_count);
  printf("Greens: %d\n", green_result);
  green_avail = green_avail - green_result;
  kg_needed = kg_needed - (green_result * green_val);

  int white_result =
      plates_needed(kg_needed, white_val, white_avail, white_count);
  printf("Whites: %d\n", white_result);
  white_avail = white_avail - white_result;
  kg_needed = kg_needed - (white_result * white_val);

  int sm_red_result =
      plates_needed(kg_needed, sm_red_val, sm_red_avail, sm_red_count);
  printf("Small reds: %d\n", sm_red_result);
  sm_red_avail = sm_red_avail - sm_red_result;
  kg_needed = kg_needed - (sm_red_result * sm_red_val);

  int sm_blue_result =
      plates_needed(kg_needed, sm_blue_val, sm_blue_avail, sm_blue_count);
  printf("Small blues: %d\n", sm_blue_result);
  sm_blue_avail = sm_blue_avail - sm_blue_result;
  kg_needed = kg_needed - (sm_blue_result * sm_blue_val);

  int sm_yellow_result =
      plates_needed(kg_needed, sm_yellow_val, sm_yellow_avail, sm_yellow_count);
  printf("Small yellows: %d\n", sm_yellow_result);
  sm_yellow_avail = sm_yellow_avail - sm_yellow_result;
  kg_needed = kg_needed - (sm_yellow_result * sm_yellow_val);

  int sm_green_result =
      plates_needed(kg_needed, sm_green_val, sm_green_avail, sm_green_count);
  printf("Small greens: %d\n", sm_green_result);
  sm_green_avail = sm_green_avail - sm_green_result;
  kg_needed = kg_needed - (sm_green_result * sm_green_val);

  int sm_white_result =
      plates_needed(kg_needed, sm_white_val, sm_white_avail, sm_white_count);
  printf("Small whites: %d\n", sm_white_result);
  sm_white_avail = sm_white_avail - sm_white_result;
  kg_needed = kg_needed - (sm_white_result * sm_white_val);

  return 0;
}
