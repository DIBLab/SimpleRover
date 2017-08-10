int photoPin = A5;
int photoRead;

void setup() {
  // put your setup code here, to run once:
   pinMode(photoPin, INPUT);

   Serial.begin(9600);
   Serial.println("Ready");
}

void loop() {
  // put your main code here, to run repeatedly:
  photoRead = analogRead(photoPin);
  Serial.println(photoRead);
}
