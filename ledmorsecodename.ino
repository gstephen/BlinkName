// We define MY_LED to be the LED that we want to blink.
const pin_t MY_LED = D7;
// Define time for LED to turn on to represent a dit
int dot = 100;
// Define time for LED to turn on to represent a dah
int dash = 300;
// Define time for LED to turn off to represent space betwen dots and dashes
int ditdahspace = 100;
// Define time for LED to turn off to represent space betwen each letter
int letterspace = 300;

// The following line is optional, but recommended in most firmware. It 
// allows your code to run before the cloud is connected. In this case, 
// it will begin blinking almost immediately instead of waiting until 
// breathing cyan,
SYSTEM_THREAD(ENABLED);


void setup() {
	pinMode(MY_LED, OUTPUT);
}

// Function to light LED for a dit
void dit() {
    digitalWrite(MY_LED, HIGH);
    delay(dot);
    digitalWrite(MY_LED, LOW);
}

// // Function to light LED a dah
void dah() {
    digitalWrite(MY_LED, HIGH);
    delay(dash);
    digitalWrite(MY_LED, LOW);
}

void loop() {
	//S
	dit();delay(ditdahspace);dit();delay(ditdahspace);dit();
    //Letter Space
    delay(letterspace);
    
    //T
    dah();
    //Letter Space
    delay(letterspace);
    
    //E
    dit();
    //Letter Space
    delay(letterspace);
    
    //P
    dit();delay(ditdahspace);dah();delay(ditdahspace);dah();delay(ditdahspace);dit();
    //Letter Space
    delay(letterspace);
    
    //H
    dit();delay(ditdahspace);dit();delay(ditdahspace);dit();delay(ditdahspace);dit();
    //Letter Space
    delay(letterspace);
    
    //E
    dit();
    //Letter Space
    delay(letterspace);
    
    //N
    dah();delay(ditdahspace);dit();
    //Letter Space
    delay(letterspace);
}

