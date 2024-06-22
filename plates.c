#include "plates.h" //

// name, val, avail, count
Plate plates[] = {{"Reds", 25, 2, 0},         {"Blues", 20, 4, 0},
                  {"Yellows", 15, 2, 0},      {"Greens", 10, 4, 0},
                  {"Whites", 5, 2, 0},        {"Little reds", 2.5, 2, 0},
                  {"Little blues", 2, 2, 0},  {"Little yellows", 1.5, 2, 0},
                  {"Little greens", 1, 2, 0}, {"Little whites", 0.5, 2, 0}};

// 
int plate_count = sizeof(plates) / sizeof(plates[0]);
