const int fan1_pin6 = 6; 
int fan_Speed = 20;

void setup() {
  // put your setup code here, to run once:

Serial.begin(115200);  //initilize serial connection


}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    String fan_Print = "About to turn on fan ";
    String print_All = fan_Print + fan_Speed;
    Serial.println(print_All);
    analogWrite(fan1_pin6, 20);
  }
}
