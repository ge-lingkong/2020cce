void setup(){
  size(400,200);
  textSize(40);
}
int x=100,y=100;
void draw(){
  background(#3607D8);
  rect(x,y, 50,50);
}
void keyPressed(){
  if(keyCode==LEFT) x-=10;
  if(keyCode==RIGHT) x+=10;
}
