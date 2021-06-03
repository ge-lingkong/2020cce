import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player=new SoundFile(this, "tada.mp3");
}
void draw(){
  int s=second();
  background(58,114,191);
  text(10-s%11, 100,100);
  if(10-s%11==0 && !player.isPlaying())
    player.play();
}
