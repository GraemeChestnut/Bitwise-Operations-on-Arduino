#include <stdio.h>

void setup() {

    // Set built-in LED pin (PB5 / digital 13) as OUTPUT
    DDRB |= (1 << DDB5);
      
    /* Set built-in LED pin (PB5 / digital 13) HIGH points to PORTB. Shifts a 1 into the PORTB5, Uses or + equals operator. 
    So *if* PORTB5 was or is 1 now, it will make it 1 in the actual register. 
    All other bits remain the same because or the or expression, and in our mask we only have 00010000; only PORTB5 actually changes */

    PORTB |= (1 << PORTB5);

    /*Creates masks on PORTB of 00010000. If 5th bit in PORTB and this mask are both nonzero, then it will return True to the if statement*/
    if(PORTB & (1 << PORTB5){
      printf("LED IS ON");
    } else {
      printf("LED IS OFF");
    }
}

void loop() {
    // nothing
}