void setup(){
  size(400,200);
  textSize(40);
}
int x=100,y=100,vx=0,vy=0;
void draw(){
  background(#3607D8);
  rect(x,y, 50,50);
  x+=vx;
}
void keyPressed(){
  if(keyCode==LEFT) vx=-1;
  if(keyCode==RIGHT) vx=1;
}
void keyReleased(){
  vx=0;
}
