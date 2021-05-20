void setup(){
  size(800,400);
  textFont(createFont("標楷體", 64));//(字型,大小)
}
void draw(){
  background(#3E8DF7);//(色碼)，也可用(R,G,B)
  int s=second(),m=minute(),h=hour();//實時變動
  text("現在時間:" + h + ":" + m + ":" + s, 100, 200);
  int total=s+60*m+3600*h;
  int closeH=17, closeM=40, closeS=0;
  int total2=closeS+closeM*60+closeH*3600;
  int ans=total2-total;
  text("剩下:" + ans + "秒", 100, 100);
  int ansH=ans/3600%60, ansM=ans/60%60, ansS=ans%60;
  text("剩餘時間:" + ansH + ":" + ansM + ":" + ansS, 100, 300);
}
