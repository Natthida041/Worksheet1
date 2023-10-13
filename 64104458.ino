void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int j = 0; j < 360; j=j+4) {
    Serial.print("Sin:");
    Serial.print(sin(j * (PI / 90)));
    Serial.print("\t");

    Serial.print("Cos:");
    Serial.print(cos(j * (PI / 90)));
    Serial.print(",");

    Serial.print("x:");
    Serial.println(0*cos(j * (PI / 1)));
  }
}
