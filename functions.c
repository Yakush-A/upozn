#include "functions.h"

enum {daily, every_n_days, weekly, every_n_weeks, monthly, every_n_month, yearly};

typedef struct
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
} date;

typedef struct 
{
    int period;
} schedule;

typedef struct 
{
    char departure_location[30];
    char destination_location[30];
    unsigned int seats;
    schedule dates;
} tour;
