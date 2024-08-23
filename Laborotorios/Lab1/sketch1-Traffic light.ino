// Constants to define LED pins
#define RED_LED 10
#define GREEN_LED 11
#define BLUE_LED 12

// Define durations for each light (in milliseconds)
#define RED_DURATION 5000    // Duration for red light
#define YELLOW_DURATION 2000 // Duration for yellow light (simulated with red and green)
#define GREEN_DURATION 5000  // Duration for green light

void setup()
{
    Serial.begin(9600);         // Initialize serial communication at 9600
    pinMode(RED_LED, OUTPUT);   // Set RED_LED pin as output
    pinMode(GREEN_LED, OUTPUT); // Set GREEN_LED pin as output
    pinMode(BLUE_LED, OUTPUT);  // Set BLUE_LED pin as output

    Serial.println("Semaphore simulation started.");
}

void loop()
{
    // Red light
    turnOnRed();
    turnOffGreen();
    turnOffBlue();
    delay(RED_DURATION);

    // Yellow light (simulated with red and green LEDs)
    turnOnRed();
    turnOnGreen();
    turnOffBlue();
    delay(YELLOW_DURATION);

    // Green light
    turnOffRed();
    turnOnGreen();
    turnOffBlue();
    delay(GREEN_DURATION);
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

void turnOnBlue()
{
    digitalWrite(BLUE_LED, HIGH); // Turn on the blue LED
}

void turnOffBlue()
{
    digitalWrite(BLUE_LED, LOW); // Turn off the blue LED
}
