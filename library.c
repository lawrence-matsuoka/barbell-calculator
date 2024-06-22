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

int plates_needed(double weight, double val, int avail, int count) {
  while (weight >= (val * 2) && avail >= 2) {
    count += 2;
    avail -= 2;
    weight -= (2 * val);
  }
  return count;
}
