#define MIDI_CHANNEL 1

const int button1 = 22;
const int button2 = 23;
const int button3 = 24;
const int button4 = 25;
const int button5 = 26;
const int button6 = 27;
const int button7 = 28;
const int button8 = 29;
const int button9 = 30;

void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(button7, INPUT_PULLUP);
  pinMode(button8, INPUT_PULLUP);
  pinMode(button9, INPUT_PULLUP);
}

void loop() {
  int button1State = digitalRead(button1);
  int button2State = digitalRead(button2);
  int button3State = digitalRead(button3);
  int button4State = digitalRead(button4);
  int button5State = digitalRead(button5);
  int button6State = digitalRead(button6);
  int button7State = digitalRead(button7);
  int button8State = digitalRead(button8);
  int button9State = digitalRead(button9);

  if (button1State == LOW) {
     Serial.println("Button 1 pressed");
  }

  if (button2State == LOW) {
     Serial.println("Button 2 pressed");
  }

  if (button3State == LOW) {
     Serial.println("Button 3 pressed");
  }

  if (button4State == LOW) {
     Serial.println("Button 4 pressed");
  }
  
  if (button5State == LOW) {
     Serial.println("Button 5 pressed");
  }
  
  if (button6State == LOW) {
     Serial.println("Button 6 pressed");
  }

  if (button7State == LOW) {
     Serial.println("Button 7 pressed");
  }

  if (button8State == LOW) {
     Serial.println("Button 8 pressed");
  }

  if (button9State == LOW) {
     Serial.println("Button 9 pressed");
  }
}
