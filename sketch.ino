#define POT A0 // Potentiometer on pin A0

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);

  Serial.begin(9600);
  digitalWrite(13, HIGH);

}

int i = 0;

void loop() {
  // put your main code here, to run repeatedly:

  int potStatus = analogRead(POT);
  Serial.println(potStatus);

  digitalWrite(13, LOW);

  analogRead(A0);
  delay(analogRead(A0));

  digitalWrite(13, HIGH);
  i++;
}
