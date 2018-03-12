#include "Speaker.h"
#include "startup_music.h"

void setup() {
  // put your setup code here, to run once:
  SPEAKER().begin();
  SPEAKER().playMusic(m5stack_startup_music, 25000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
