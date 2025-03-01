/*
  RP17 keyboard

  created 2023
  by Robit for use with CH55xduino、QMK

  This example code is in the public domain.

*/

//For windows user, if you ever played with other HID device with the same PID C55D
//You may need to uninstall the previous driver completely


#ifndef USER_USB_RAM
#error "This example needs to be compiled with a USER USB setting"
#endif

#include "src/CH55x_QMK_Lite.h"

#define BUTTON_PIN 15

void bootloaderRoutine() {
  USB_CTRL = 0;
  EA = 0;  //Disabling all interrupts is required.
  TMOD = 0;
  __asm__("lcall #0x3800");  //Jump to bootloader code
}

void setup() {
  delay(1000);

  { //initialize the keys or matrix.
    pinMode(BUTTON_PIN, INPUT_PULLUP);
  }

  {
    if (!digitalRead(BUTTON_PIN)) {
      //Enter bootloader
      bootloaderRoutine();
    }
  }

  ch55xQmkLite_init();
}

void loop() {
  ch55xQmkLite_task();
}
