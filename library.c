#include <stdio.h>
#include <string.h>

int get_bar_type(char *bar_type, int current_bar, int female_bar,
                 int male_bar) {
  scanf("%s", bar_type);
  if (strcmp(bar_type, "F") == 0) {
    current_bar = female_bar;
  } else {
    current_bar = male_bar;
  }

  return current_bar;
}

int plates_needed(int plate_weight, int plate_val, int plate_avail,
                  int plate_count) {
  while (plate_weight >= (plate_val * 2) && plate_avail >= 2) {
    plate_count += 2;
    plate_avail -= 2;
    plate_weight -= (2 * plate_val);
  }
  return plate_count;
}
