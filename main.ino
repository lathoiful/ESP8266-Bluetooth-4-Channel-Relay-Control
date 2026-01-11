String data = "";

void setup() {
  Serial.begin(9600);

  pinMode(D1, OUTPUT); // Relay 1
  pinMode(D2, OUTPUT); // Relay 2
  pinMode(D5, OUTPUT); // Relay 3
  pinMode(D6, OUTPUT); // Relay 4

  // relay OFF default
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, HIGH);
}

void loop() {
  while (Serial.available()) {
    char c = Serial.read();
    data += c;
    delay(2);
  }

  if (data.length() > 0) {
    data.trim();

    // RELAY 1
    if (data == "A00101A2") digitalWrite(D1, LOW);   // ON
    if (data == "A00100A1") digitalWrite(D1, HIGH);  // OFF

    // RELAY 2
    if (data == "A00201A3") digitalWrite(D2, LOW);
    if (data == "A00200A2") digitalWrite(D2, HIGH);

    // RELAY 3
    if (data == "A00301A4") digitalWrite(D5, LOW);
    if (data == "A00300A3") digitalWrite(D5, HIGH);

    // RELAY 4
    if (data == "A00401A5") digitalWrite(D6, LOW);
    if (data == "A00400A4") digitalWrite(D6, HIGH);

    data = ""; // reset buffer
  }
}
