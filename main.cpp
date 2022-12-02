/* *
 * @file main.cpp
 * @brief Basic Mbed 6 template file for SNIR students
 * @author Liova
 * @version 1.0
 * @date 01/12/2022
 */

#include "mbed.h"
#include "BME280.h"
#include "Grove_LCD_RGB_Backlight.h"

#define SLEEP_TIME 500ms // (msec)
BME280 capteur (I2C_SDA, I2C_SCL);
Grove_LCD_RGB_Backlight afficheur (I2C_SDA, I2C_SCL);


int main() {
  while (true) {
    printf("Temperature : %2.2f°C  Pression : %2.2fhPa  Humidité : %2.2f% \r\n", capteur.getTemperature(), capteur.getPressure(), capteur.getHumidity());
    afficheur.setRGB(0x255, 0x000, 0x000);
    afficheur.print("Hello World");
    afficheur.locate(0,1);
    afficheur.print("Ceci est un test");
    afficheur.locate(0,2);
    ThisThread::sleep_for(SLEEP_TIME);
    afficheur.setRGB(0x000, 0x255, 0x000);
    ThisThread::sleep_for(SLEEP_TIME);
    afficheur.setRGB(0x000, 0x000, 0x255);
    ThisThread::sleep_for(SLEEP_TIME);

  }
}
