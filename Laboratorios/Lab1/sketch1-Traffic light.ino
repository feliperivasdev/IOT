// Constants to define LED pins
#define RED_LED 11
#define GREEN_LED 13
#define YELLOW_LED 12

// Define durations for each light (in milliseconds)
#define RED_DURATION 5000    // Duration for red light
#define YELLOW_DURATION 2000 // Duration for yellow light
#define GREEN_DURATION 5000  // Duration for green light

void setup()
{
    Serial.begin(9600);         // Initialize serial communication at 9600
    pinMode(RED_LED, OUTPUT);   // Set RED_LED pin as output
    pinMode(GREEN_LED, OUTPUT); // Set GREEN_LED pin as output
    pinMode(YELLOW_LED, OUTPUT); // Set YELLOW_LED pin as output

    Serial.println("Semaphore simulation started.");
}

void loop()
{
    // Red light
    turnOnRed();
    turnOffGreen();
    turnOffYellow();
    delay(RED_DURATION);

    // Yellow light (transition from red to green)
    turnOffRed();
    turnOnYellow();
    turnOffGreen();
    delay(YELLOW_DURATION);

    // Green light
    turnOffYellow();
    turnOnGreen();
    delay(GREEN_DURATION);

    // Yellow light (transition from green to red)
    turnOffGreen();
    turnOnYellow();
    delay(YELLOW_DURATION);

    // Back to red light (and repeat the cycle)
    turnOffYellow();
    turnOnRed();
    delay(RED_DURATION);
}

// Functions to control individual LEDs
void turnOnRed()
{
    digitalWrite(RED_LED, HIGH); // Turn on the red LED
}

void turnOffRed()
{
    digitalWrite(RED_LED, LOW); // Turn off the red LED
}

void turnOnGreen()
{
    digitalWrite(GREEN_LED, HIGH); // Turn on the green LED
}

void turnOffGreen()
{
    digitalWrite(GREEN_LED, LOW); // Turn off the green LED
}

void turnOnYellow()
{
    digitalWrite(YELLOW_LED, HIGH); // Turn on the yellow LED
}

void turnOffYellow()
{
    digitalWrite(YELLOW_LED, LOW); // Turn off the yellow LED
}
