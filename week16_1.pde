void setup(){
  size(400,200);
}
float start=0,v;
void mousePressed(){
  v=random(1);
}
void draw(){
  background(#0C33C9);
  if(v>0.001){
    start+=v;//位置
    v*=0.99;//摩擦力
  }
  fill(255); text(start, 200,150); text(v, 200,170);
  for(int i=0;i<24;i++){
    float shift=2*PI*i/24.0;
    if(i%3==0) fill(#4E00A2);
    if(i%3==1) fill(#C1FFF7);
    if(i%3==2) fill(255);
    if(i==0) fill(#8635FA);
    arc(100,100, 180,180, shift+start, shift+PI/12+start);
  }
}
