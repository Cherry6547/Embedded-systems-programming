void setup() {
  // put your setup code here, to run once:
  volatile char *dir,*in1,*out1,count=0;
  volatile long i;
  dir = 0x30;
  *dir = 0x01;
  out1 = 0x31;
  dir = 0x107;
  *dir = 0x00;
  in1 = 0x106;
  while(1){
    if((*in1 & 0x01) == 0x01){
      *out1 = 0x01;
    }
    else{
      *out1 = 0x00;
    }
    for(i=0;i<40000;i++);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
