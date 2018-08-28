const int fan1_pin6 = 6;
int fan_speed = 20;

void setup() {
  // put your setup code here, to run once:

Serial.begin(115200);  //initilize serial connection


}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    Serial.println("About to turn on fan" + fan1_pin6);
    analogWrite(fan1_pin6, 20);
  }
}
