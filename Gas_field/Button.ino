int lswitch() {
  if (digitalRead(pushL) == LOW) {
    delay(200);
    return 1;
  }
  else return 0;

}
int rswitch() {
  if (digitalRead(pushR) == LOW) {
    delay(200);
    return 1;
  }
  else return 0;
}
int mswitch () {
if (digitalRead(pushM) == LOW) {
    delay(50);
    return 1;
  }
  else return 0;
}
