
#include <Wire.h>
#include "RTClib.h"
#include <SPI.h>
#include <DMD.h>
#include <TimerOne.h>
#include "Arial_black_16.h"
#include "font_modi_15x19.h"
#include "jakanaka.h"
#include "Font_6x14.h"
#include "SystemFont5x7.h" //-> This font only contains numbers from 0-9. Used only to display time.
#define DISPLAYS_ACROSS 3 //-> Number of P10 panels used, side to side.
#define DISPLAYS_DOWN 3
DMD dmd(DISPLAYS_ACROSS, DISPLAYS_DOWN);
int c[18];
int a;
RTC_DS1307 rtc; //-> RTC Declaration

int _day, _month, _year, _hour24, _hour12, _minute, _second, _dtw;
int hr24;
String st;
char nameoftheday[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
char month_name[12][12] = {"January", "February", "March", "April", "May", "June", "Jult", "August", "September", "October", "November", "December"};
const long interval = 1000; //-> Retrieve time and date data every 1 second
unsigned long previousMillis = 0;
char hr_24 [3];
String str_hr_24;
char mn [3];
String str_mn;
char ta [3];
String str_ta;
char mo [3];
String str_mo;
char ye [6];
String str_ye;
char dy [3];
String str_dy;
char mon [3];
String str_mon;

int pushM = 4;
int pushL = 2;
int pushR = 5;
byte swr, swl, swm;
unsigned long m1, m2;
int count = 0;
char b[8];
String str;
int m = 1;


void ScanDMD() {
  dmd.scanDisplayBySPI();
}

void setup() {
  delay(1000);
  if (! rtc.begin()) {
    while (1);
  }
  if (! rtc.isrunning()) {
//   rtc.adjust(DateTime(2022, 1, 21, 3, 0, 0));
  }
//  rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); //-> Set the time and date based on your computer time and date. 
//  rtc.adjust(DateTime(2022, 1, 21, 3, 0, 0));
  pinMode(pushR, INPUT_PULLUP);
  pinMode(pushL, INPUT_PULLUP);
  pinMode(pushM, INPUT_PULLUP);
  Timer1.initialize(1000);
  Timer1.attachInterrupt(ScanDMD);
  dmd.clearScreen(true);
}

void loop() {
Clock();
  rswitch();
  lswitch();
  swm = mswitch();
  if (swm == 1) {
    menu();
    //  time_set();
  }
  else {
}
}
