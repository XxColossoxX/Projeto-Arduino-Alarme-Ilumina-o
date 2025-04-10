int valorLdr;
int v100 	= 679;
float v80 	= 543.2;
float v79 	= 536.41;
float v50	= 339.5;
int i; 		

void setup()
{
	Serial.begin(9600);
  	pinMode(4, OUTPUT);
  	pinMode(2, OUTPUT);
  	pinMode(3, OUTPUT);

  
}

void loop()
{
  valorLdr = analogRead(A0);
  
  if(valorLdr <= v100 && valorLdr >= v80){
  	digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    
    	tone(8,1000, 200);
    	delay(300);
    	tone(8,1000, 200);
    	delay(300);
    	tone(8,1000, 200);
    	delay(1000);
    
  }else if(valorLdr <= v79 && valorLdr >= v50){
  		digitalWrite(4,LOW);
    	digitalWrite(2,HIGH);
    	digitalWrite(3,LOW);
    
        tone(8,1000, 200);
    	delay(300);
    	tone(8,1000, 200);
    	delay(1000);
    
  	}else if(valorLdr < v50){
  		digitalWrite(4,LOW);
    	digitalWrite(2,LOW);
    	digitalWrite(3,HIGH);

    	tone(8,1000, 200);
    	delay(1000);
  		}
  	 
  
  
  Serial.print("Valor do LDR:");
  Serial.println(valorLdr);
	delay(50);



}