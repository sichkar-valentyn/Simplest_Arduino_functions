void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  while (Serial.available() == 0) {}

  int i = Serial.read() - 48;
  while (Serial.available() == 0) {}

  int j = Serial.read() - 48;

  i = i * 10;
  i = i + j;

  Serial.println(i*i);
  delay(1000);

}

