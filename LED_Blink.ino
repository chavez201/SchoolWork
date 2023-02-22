//LED_Blink

/*NOTES
baud rates
Arduino:    9600
seeed XIAO: 115200
Seeed nano: 9600
*/

//pin#
int Pin = 2;

int count = 1;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(Pin, OUTPUT);
  Serial.begin(9600); 
}

// the loop function runs over and over again forever
void loop() {

  count += 1;

  Serial.println(count);
  Serial.println("new");

  digitalWrite(Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(Pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}