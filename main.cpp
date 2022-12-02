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
    char tableau[16];
    float temp = capteur.getTemperature();
    sprintf (tableau, "T : %2.2fdegC", temp);
    afficheur.print(tableau);
    afficheur.locate(0,1);
    afficheur.clear();
    afficheur.setRGB(0x000, 0x255, 0x255);
  }
}
