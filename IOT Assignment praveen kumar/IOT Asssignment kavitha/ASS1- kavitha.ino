int 1dr=0;



void setup()
  
{
  
  pinMode(A0,INPUT);
  
  serial.begin(9600);
  
  
  
  pinMode(5,OUTOUT);
  
  pinMode(4,OUTPUT);
  
}



void loop()
  
 {
  
  1dr =manalogRead(A0);
  
  serial.println(1dr);
  
  if (1dr < 500){
    
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    
    
    
  } else {
    
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
  
  }
  
   delay(10);
}
  
  
   
    
  
  
  
  
  