#include <stdio.h>

#define DELAY 128000


 
struct time {

int hours;

int minutes;



} ;

void display(struct time *i);

void update(struct time *i);

void delay(void);

int main(void)

{

struct time systime;

systime.hours = 0;

systime.minutes = 0;


for(;;) {

update(&systime);

display(&systime);

}

return 0;

}

void update(struct time *i)

{


i->minutes++;

}

if(i->minutes==60) {

i->minutes = 0;

i->hours++;

}

if(i->hours==24) i->hours = 0;

delay();

}

void display(struct time *i)

{

printf(“%02d:”, i->hours);

printf(“%02d:”, i->minutes);


}

void delay(void)

{

long int i;

for(i=1; i<DELAY; ++i) ;

}

