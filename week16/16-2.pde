void setup(){
  size(400,100);
}
float v,x=0;
void mousePressed(){
  v=random(1);
}
void draw(){
  background(#0C33C9);
  if(v>0.001){
    x+=v*2;
    v*=0.99;
  }
  rect(x,50, 50,50);
}
