int pins[5] = {2, 3, 4, 5, 6};  // 4-bit output

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {

  for (int num = 1; num <= 31; num++) {

    for (int i = 0; i < 5; i++) {
      int bitValue = (num >> i) & 1;  // extract bit
      
      // Reverse order so MSB is on the left
      digitalWrite(pins[4 - i], bitValue); 
    }

    delay(750);
  }
}