
#define AUTO_DET_Y A0
#define AUTO_DET_COMP A1
#define CC2 A2
#define CC1 A3
#define SDA A4
#define SCL A5
#define BTN A7
#define EN_MUX0 11
#define EN_MUX1 12
#define SEL_INPUT0 8
#define SEL_INPUT1 10
#define SEL_INPUT2 7
#define SEL_INPUT3 9

void setup() {
  // Open-drain outputs. Set to INPUT 
  pinMode(EN_MUX0, INPUT);
  digitalWrite(EN_MUX0, LOW);

  pinMode(EN_MUX1, INPUT);
  digitalWrite(EN_MUX1, LOW);

  pinMode(SEL_INPUT0, OUTPUT);
  digitalWrite(SEL_INPUT0, LOW);

  pinMode(SEL_INPUT1, OUTPUT);
  digitalWrite(SEL_INPUT1, LOW);

  pinMode(SEL_INPUT2, OUTPUT);
  digitalWrite(SEL_INPUT2, LOW);

  pinMode(SEL_INPUT3, OUTPUT);
  digitalWrite(SEL_INPUT3, LOW);


  // TODO: Check CC1, CC2 before enabling mux

  // Enable MUX0 - top board
  // pinMode(EN_MUX0, OUTPUT);
  // Enable MUX1 - bottom board output

  // EN_MUX0/MUX1 mixed up when soldering resistors.
  // and SEL resistors mixed up too. So what we select on top must be the same
  // as what's selected on bottom. grrr.
  
  pinMode(EN_MUX1, OUTPUT);
  pinMode(EN_MUX0, OUTPUT);
  digitalWrite(EN_MUX0, LOW);
  digitalWrite(EN_MUX1, LOW);

  digitalWrite(SEL_INPUT0, HIGH);
  digitalWrite(SEL_INPUT1, HIGH);

  digitalWrite(SEL_INPUT2, HIGH);
  digitalWrite(SEL_INPUT3, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

}
