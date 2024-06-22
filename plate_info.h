struct plate_info {
  const char NAME[10];
  const double WEIGHT;
  const int STOCK;
};

const int male_bar = 20;
const int female_bar = 15;

const int red_val = 25;
const int blue_val = 20;
const int yellow_val = 15;
const int green_val = 10;
const int white_val = 5;

const double sm_red_val = 2.5;
const int sm_blue_val = 2;
const double sm_yellow_val = 1.5;
const int sm_green_val = 1;
const double sm_white_val = 0.5;

// Large plates availability
extern int red_avail;
extern int blue_avail;
extern int yellow_avail;
extern int green_avail;
extern int white_avail;

extern int sm_red_avail;
extern int sm_blue_avail;
extern int sm_yellow_avail;
extern int sm_green_avail;
extern int sm_white_avail;

// Count of plates used
extern int red_count;
extern int blue_count;
extern int yellow_count;
extern int green_count;
extern int white_count;

extern int sm_red_count;
extern int sm_blue_count;
extern int sm_yellow_count;
extern int sm_green_count;
extern int sm_white_count;

// Bar type of M (20) or F (15)
extern int current_bar;
extern char bar_type[1];
