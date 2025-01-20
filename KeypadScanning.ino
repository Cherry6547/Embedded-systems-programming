void setup() {
  // put your setup code here, to run once:
  char volatile *dirf,*outf,*dirk,*ink,*dira,*outa,*dirc,*outc,i,x;
  //int volatile j;
  dirf = 0x30;  outf = 0x31;
  *dirf = 0xff; dirk = 0x107;
  ink = 0x106; *dirk = 0x00;
  dira = 0x21;  *dira = 0xff;
  outa = 0x22;  dirc = 0x27;
  *dirc = 0xff; outc = 0x28;
  while(1){
    for(i=0;i<4;i++){
      *outf = 1<<i;
      x = *ink;
      if(x){
        *outa = *outf;
        *outc = x;
      }
    }

  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
