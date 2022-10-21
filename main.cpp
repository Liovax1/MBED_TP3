/* *
 * @file main.cpp
 * @brief Basic Mbed 6 template file for SNIR students
 * @author sepro
 * @version 1.01
 * @date 04/11/2021
 */

#include "mbed.h"

#define SLEEP_TIME 500ms // (msec)
DigitalOut led1(LED1);

int main() {
  while (true) {
    printf("LO SNIR \r\n");
    led1.write(1);
    ThisThread::sleep_for(SLEEP_TIME);
    led1.write(0);
    ThisThread::sleep_for(SLEEP_TIME);
  }
}
