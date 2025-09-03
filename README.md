# UART-RS485-TEST


THIS IS ABOUT ATTEMPTING TO TOGGLE AN LED THROUGH UART AND RS485.
1st STEP-Setting up the NANO(1) PUSHBUTTON and NANO(2) LED TOGETHER
  |- this will deal with UART(RX/TX) TRANSMISSION between nano 1 and  nano 2. the pushbutton's pressed signal on nano 1 is sent through UART to nano 2 to light up the LED on nano 2.
  |- the led 2 "ON" message is further sent forward to nano 3 through RS485(1) (connected to NANO(2)) to RS485(2) attatched onto NANO 3 which in turns "ON" the led at nano 3.


NANO(1)--------NANO(2)-----RS485(1)----RS485(2)-----NANO(3)
 |               |                                    |  
PUSHBUTTON      LED(1)                               LED(2)


