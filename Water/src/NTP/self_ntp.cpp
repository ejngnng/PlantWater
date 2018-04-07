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
  int hour = timeClient.getHours();
  int minutes = timeClient.getMinutes();
  if(hour == 8 && minutes >0 && minutes < 5){
    TurnON(&state);
  }else{
    TurnOFF(&state);
  }
}
