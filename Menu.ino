
void menu() {
  dmd.clearScreen( true );
  dmd.selectFont(Arial_Black_16);

  int list = 10, cl = 0;
  rswitch();
  lswitch();
  mswitch();
  if (mswitch() == 1) {
    while (mswitch() == 1);
    while (1) {
      if (cl != m) {
        cl = m;
        if (cl == 1) {

          dmd.drawString(15, 0, "HOUR-24", 7, GRAPHICS_NORMAL);
          hour_();
        }

        else if (cl == 2) {
          dmd.clearScreen( true );
          dmd.selectFont(Arial_Black_16);
          dmd.drawString(20, 0, "MINUTE", 6, GRAPHICS_NORMAL);
          minute_();
        }
        else if (cl == 3) {
          dmd.clearScreen( true );
          dmd.selectFont(Arial_Black_16);
          dmd.drawString(32, 0, "DAY", 4, GRAPHICS_NORMAL);
          date_();
        }
        else if (cl == 4) {
          dmd.clearScreen( true );
          dmd.selectFont(Arial_Black_16);
          dmd.drawString(20, 0, "MONTH", 5, GRAPHICS_NORMAL);
          month_();
        }
        else if (cl == 5) {
          dmd.clearScreen( true );
          dmd.selectFont(Arial_Black_16);
          dmd.drawString(27, 0, "YEAR", 4, GRAPHICS_NORMAL);
          year_();
        }
        else if (cl == 6) {
          dmd.clearScreen( true );
          m = 1;
          rtc.adjust(DateTime(_year, _month, _day, _hour24, _minute, 0));
          return;
        }
      }

      if (mswitch()) {
        delay(100);
        if (m < list) m++;

      }
    }
  }

}
