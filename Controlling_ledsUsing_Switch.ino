void setup() {
  // put your setup code here, to run once:
  volatile char *dir,*in1,*out1,count=0;
  volatile long i;
  dir = 0x30;  // PORT F Direction Register 
  *dir = 0x01; // PORT F PIN 0 BEING configured as OUTPUT
  out1 = 0x31; // PORT F output 
  dir = 0x107; //  PORT K Direction Register
  *dir = 0x00; // PORT K PIN 0 BEING configured as INPUT
  in1 = 0x106; // PORT K INPUT ADDRESS
  while(1){
    if((*in1 & 0x01) == 0x01){ //masking is done to get proper input 
      *out1 = 0x01; // if button is pushed then led will turn on
    }
    else{
      *out1 = 0x00; // if button is not pushed then led will remain off
    }
    for(i=0;i<40000;i++); // delay is maintained to see output clearly
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
