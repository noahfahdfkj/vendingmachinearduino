int buttonA = 2;
int buttonB = 3;
int greenled = 4;
int redled = 5;
int button_stateA = 0;
int button_stateB = 0;


void setup() {

pinMode(greenled, OUTPUT);
pinMode(redled, OUTPUT);


Serial.begin(9600);
pinMode(buttonOne, INPUT);
pinMode(buttonTwo, INPUT);
}

void loop() {

  button_stateOne = digitalRead(buttonOne);
  button_stateTwo = digitalRead(buttonTwo);

  if (button_stateOne == LOW && button_stateLow == LOW)
    {
      Serial.print("Waiting...");
      delay(1000);
    }

   else if (button_stateOne == HIGH && button_stateTwo......;;;;/ == LOW)
    {
      Serial.print("Vending Soda");
      digitalWrite(greenled, HIGH);
      delay(1000);
      digitalWrite(greenled, LOW);
    }

    else if (button_stateOne == LOW && button_stateTwo == HIGH)
      {
        Serial.print("Vending water");
        digitalWrite(greenled, HIGH);
        delay(1000);
        digitalWrite(greenled, LOW);
      }

    else if (button_stateOne == HIGH && button_stateTwo == HIGH)
      {
        Serial.print("Product not available");
        digitalWrite(redled, HIGH);
        delay(1000);
        digitalWrite(redled, LOW); 
      }
}
