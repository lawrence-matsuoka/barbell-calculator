#ifndef PLATES_H
#define PLATES_H

typedef struct {
  const char *name;
  const double val;
  int avail;
  int count;
} Plate;

extern Plate plates[];

#endif // PLATES_H

//
const int male_bar = 20;
const int female_bar = 15;

// Bar type of M (20) or F (15)
extern int current_bar;
extern char bar_type[1];
