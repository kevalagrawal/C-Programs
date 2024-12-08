//**Problem**: Define a structure `Date` with fields for day, month, and year. Define a structure `Event` with fields for name and date (using `Date`). Print the event details.


#include <stdio.h>

typedef struct date{
    unsigned int day;
    unsigned int month;
    unsigned int year;
}D;

typedef struct Event{
    char name[30];
    D date;
}E;

int main() {
    // Your code goes here
    E event[2] = {{"Birthday",{05,07,2005}},
    {"World Population Day",{11,07,2024}}};
    for(int i=0;i<2;i++){
        printf("Event : %s\nDate : %u-%u-%u",event[i].name,event[i].date.day,event[i].date.month,event[i].date.year);
        printf("\n");
    }
    return 0;
}