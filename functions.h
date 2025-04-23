#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define DAILY 0
#define WEEKLY 1
#define MONTHLY 2
#define NO_PERIOD 3


//структура, содержащая дату в формате ДД.ММ.ГГГГ
typedef struct
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
} dmy_date;

//структура, содержащая время в формате ЧЧ.ММ
typedef struct 
{
    unsigned int hour : 5;
    unsigned int min : 6;
} hm_time;

//кольцо, содержащее локации конкретного маршрута
typedef struct list
{
    char* location;
    hm_time stop;
    struct list* next;
} tour_list;

typedef struct schedule
{
    unsigned int period : 2;
    
} schedule;
//структура, содержащая общую информацию о маршруте
typedef struct 
{

    unsigned int seats;
    tour_list* locations;
} tour;
