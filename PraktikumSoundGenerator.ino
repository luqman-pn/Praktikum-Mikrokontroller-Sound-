

void setup() {
  // put your setup code here, to run once:
  Serial.println("_+_+_+_+_+ FUNGSI MATEMATIKA +_+_+_+_+_");
  Serial.begin(9600);
  Serial.print("cos(90) = "); Serial.println(cos(90));
  float derajat = 30; Serial.print("derajat = "); Serial.println(derajat);
  float hasil1;
  hasil1 = derajat/180*PI;  Serial.print("hasil1 = "); Serial.println(hasil1);
  float hasil2;
//  hasil2 = ((ha/180)*(22/7));
  Serial.print("sin(30) = "); Serial.println(sin(hasil1));
  Serial.print("sin(30)versi2 = "); Serial.println(sin(derajat/180*PI));
  Serial.print("tan(90) = "); Serial.println(tan(90));
  Serial.print("atan(90); = "); Serial.println(atan(90));
  Serial.print("atan2(90,10) = "); Serial.println(atan2(90,10));
  Serial.print("sqrt(9) = "); Serial.println(sqrt(9));
  Serial.print("exp(9) = "); Serial.println(exp(9));
  Serial.print("log(100) = "); Serial.println(log(100));
  Serial.print("pow(9,2) = "); Serial.println(pow(9,2));
  Serial.print("square(9) = "); Serial.println(sqrt(9));
  Serial.print("fabs(-1.5) = "); Serial.println(fabs(-1.5));
  Serial.print("fmod(1.2334,2) = "); Serial.println(fmod(1.2334,2));
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
