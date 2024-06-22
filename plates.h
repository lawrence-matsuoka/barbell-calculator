#ifndef PLATES_H
#define PLATES_H

typedef struct {
  const char *name;
  const double val;
  int avail;
  int count;
} Plate;

extern Plate plates[];
extern int plate_count;

#endif // PLATES_H

extern int current_bar;
extern char bar_type[1];
