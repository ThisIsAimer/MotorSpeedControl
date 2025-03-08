// C++ code
//
const int SPEED_CONTROL_PIN = A0; //for analog input

const int OUTPUT_PWM_PIN = 3;
  
  
  
void setup()
{
  pinMode(SPEED_CONTROL_PIN, INPUT);
  pinMode(OUTPUT_PWM_PIN, OUTPUT);
  
  Serial.begin(115200);
  Serial.println("setup is done");
}

void loop()
{
  //getting analog input
  int analogValue = analogRead(SPEED_CONTROL_PIN);
  
  //takes number between 0,1023 so we devide it by 4
  //in order to get values from 0 to 255
  analogWrite(OUTPUT_PWM_PIN,analogValue / 4);
  
  delay(10);
}