int lm35=A1;
float deger;
float sic;
void setup() {
  pinMode(lm35,INPUT);
  Serial.begin(9600);
  

  

}

void loop() {
deger=analogRead(lm35);
sic=deger*0.5;
Serial.println(sic);
if(sic>30){
  Serial.println("Hava Çok Sıcak Klima Aç ");
  
}
else{
  Serial.println("Hava Normal");
}
delay(1000);
}
