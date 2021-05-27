int []a=new int[47];
void setup(){
  size(400, 200);
  textSize(30);
  for(int i=0;i<47;i++)
    a[i]=i+1;
  for(int i=0;i<1000;i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int t=a[i1]; a[i1]=a[i2]; a[i2]=t;
  }
}
int N=0,rolling=0;
void draw(){
  textAlign(CENTER,CENTER);//文字對齊(中,中)
  background(#23CBA0);
  for(int i=0;i<N;i++){
    int x=i*80+40;
    if(i==N-1 && rolling>0){
      x+=rolling;
      rolling-=3;
    }
    fill(255); ellipse(x, 100, 55,55);
    fill(128); text(a[i], x+1, 100+1);
    fill(0); text(a[i], x, 100);
  }
}
void mousePressed(){
  if(N<5){
    rolling=400-N*90;
    N++;
  }
}
