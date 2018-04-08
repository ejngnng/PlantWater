#include "self_ntp.h"
#include "GPIO/io.h"

WiFiUDP ntpUDP;

NTPClient timeClient(ntpUDP, 28800);

state_t state;

void ntp_init(){
  timeClient.begin();
//  timeClient.setTimeOffset(28800);
}


void ntp_loop(){
  timeClient.update();
  Serial.println(timeClient.getFormattedTime());
  int hour = timeClient.getHours();
  int minutes = timeClient.getMinutes();
  int seconds = timeClient.getSeconds();
  if(hour == 18 && minutes >=30 && minutes <= 31 && seconds <= 50){
    TurnON(&state);
  }else{
    TurnOFF(&state);
  }
}
