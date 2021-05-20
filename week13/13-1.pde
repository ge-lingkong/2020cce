void setup(){
  size(1024, 400);
}
void draw(){
  if(mousePressed)
    background(255, 0, 255);//按下變紫色
  else
    background(62, 141, 247);//沒按下是淡藍色
  textSize(36);//文字大小
  text("Now a is:" + a, 412, 200);//顯示文字(要顯示的文字,x軸位置,y軸位置)
}
int a=0;
void mousePressed(){//每點一次a+1
  a++;
}
