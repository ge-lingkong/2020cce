int ans=0;
void setup(){
  size(400, 200);
  textSize(30);
}
void draw(){
  background(#435FF7);
  text(ans, 20, 30);
}
void mousePressed(){
  ans=(int)random(60);
}
