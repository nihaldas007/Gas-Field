void minute_() {
  int list = 59;
  while (1) {
    if (rswitch()) {
      if (_minute < list) {
        delay(1);
        _minute++;
      }
    }
    else if (lswitch()) {
      if (_minute > 0) {
        delay(1);
        _minute--;
      }
    }
    dmd.selectFont(Font_15x19);
    str_mn = String(_minute);
    str_mn.toCharArray(mn, 3);

    if (_minute < 10) {
      dmd.drawString(32, 20, "0", 2, GRAPHICS_NORMAL);
      dmd.drawString(48, 20, mn, 2, GRAPHICS_NORMAL);
    }
    else {
      dmd.drawString(32, 20, mn, 2, GRAPHICS_NORMAL);
    }
    if (mswitch() == 1)break;
  }

}
void hour_() {
  int list = 24;
  while (1) {
    if (rswitch()) {
      if (_hour24 < list) {
        delay(1);
        _hour24++;
      }
    }
    else if (lswitch()) {
      if (_hour24 > 0) {
        delay(1);
        _hour24--;
      }
    }
    dmd.selectFont(Font_15x19);
    str_hr_24 = String(_hour24);
    str_hr_24.toCharArray(hr_24, 3);

    if (_hour24 < 10) {
      dmd.drawString(32, 20, "0", 2, GRAPHICS_NORMAL);
      dmd.drawString(48, 20, hr_24, 2, GRAPHICS_NORMAL);
    }
    else {
      dmd.drawString(32, 20, hr_24, 2, GRAPHICS_NORMAL);
    }
    if (mswitch() == 1)break;
  }

}
void date_() {
  int list = 31;
  while (1) {
    if (rswitch()) {
      if (_day < list) {
        delay(1);
        _day++;
      }
    }
    else if (lswitch()) {
      if (_day > 0) {
        delay(1);
        _day--;
      }
    }
    dmd.selectFont(Font_15x19);
    str_dy = String(_day);
    str_dy.toCharArray(dy, 3);

    if (_day < 10) {
      dmd.drawString(32, 20, "0", 2, GRAPHICS_NORMAL);
      dmd.drawString(48, 20, dy, 2, GRAPHICS_NORMAL);
    }
    else {
      dmd.drawString(32, 20, dy, 2, GRAPHICS_NORMAL);
    }
    if (mswitch() == 1)break;
  }

}
void month_() {
  int list = 12;
  while (1) {
    if (rswitch()) {
      if (_month < list) {
        delay(1);
        _month++;
      }
    }
    else if (lswitch()) {
      if (_month > 0) {
        delay(1);
        _month--;
      }
    }
    dmd.selectFont(Font_15x19);
    str_mon = String(_month);
    str_mon.toCharArray(mon, 3);

    if (_month < 10) {
      dmd.drawString(32, 20, "0", 2, GRAPHICS_NORMAL);
      dmd.drawString(48, 20, mon, 2, GRAPHICS_NORMAL);
    }
    else {
      dmd.drawString(32, 20, mon, 2, GRAPHICS_NORMAL);
    }
    if (mswitch() == 1)break;
  }

}
void year_() {
  int list = 2050;
  while (1) {
    if (rswitch()) {
      if (_year < list) {
        delay(1);
        _year++;
      }
    }
    else if (lswitch()) {
      if (_year > 2000) {
        delay(1);
        _year--;
      }
    }
    dmd.selectFont(Font_15x19);
    str_ye = String(_year);
    str_ye.toCharArray(ye, 6);

    //    if (_year > 2010) {
    //      dmd.drawString(5, 9, "20", 2, GRAPHICS_NORMAL);
    //      dmd.drawString(17, 9, ye, 2, GRAPHICS_NORMAL);
    //    }
    //    else {
    dmd.drawString(20, 20, ye, 4, GRAPHICS_NORMAL);
    //    }
    if (mswitch() == 1)break;
  }
}
