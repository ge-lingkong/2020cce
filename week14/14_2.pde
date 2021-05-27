int []a={1,2,3,4,5,6,7,8,9,10};
int i1,i2;
void setup(){
  size(400, 200);
  textSize(30);
}
void draw(){
  background(#435FF7);
  for(int i=0;i<10;i++){
    text(a[i], i*40, 50);
  }
  rect(i1*40, 50, 30, 30);
  rect(i2*40, 50, 30, 30);
}
void mousePressed(){
  for(int i=0;i<100;i++){//多洗幾次牌弄亂
    i1=(int)random(10);
    i2=(int)random(10);
    int t=a[i1]; a[i1]=a[i2]; a[i2]=t;
  }
}
