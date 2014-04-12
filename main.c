#include "Aithon.h"

enum DIGITAL_PINS {
   RELOAD_LED=14
};

enum ANALOG_PINS {
   FOLLOW_SENSOR=1
};

#define FOLLOW_SENSOR 1
#define FOLLOW_THRESHOLD 1500


int followIsOnLine(void)
{
   return analog_get(FOLLOW_SENSOR) > FOLLOW_THRESHOLD;
}

void initPins(void)
{
   digital_mode(RELOAD_LED, OUTPUT_OPENDRAIN);
   digital_set(RELOAD_LED, 1);
}

int main(void)
{
   initPins();

   // print something to the LCD screen
   lcd_printf("We win!\n");
   
   while (1) {
      if (followIsOnLine()) {
         motor_set(0, 100);
         motor_set(1, 70);
      } else {
         motor_set(0, 70);
         motor_set(1, 100);
      }
   }
}