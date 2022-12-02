/* *
 * @file main.cpp
 * @brief Basic Mbed 6 template file for SNIR students
 * @author Liova
 * @version 1.0
 * @date 01/12/2022
 */

#include "mbed.h"
#include "BME280.h"

#define SLEEP_TIME 500ms // (msec)
BME280 capteur (I2C_SDA, I2C_SCL);


int main() {
  while (true) {
    printf("Temperature : %2.2f°C  Pression : %2.2fhPa  Humidité : %2.2f% \r\n", capteur.getTemperature(), capteur.getPressure(), capteur.getHumidity());
  }
}
