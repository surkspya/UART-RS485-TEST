# UART-RS485-TEST 

This project demonstrates **UART communication** between Arduino Nanos and extends it to **RS485 transmission** for multi-device communication.  

The system flow is as follows:

---

## System Overview

1. **Nano (1)**  
   - Pushbutton input.  
   - When pressed, it sends a UART signal to **Nano (2)**.  

2. **Nano (2)**  
   - Receives UART data from **Nano (1)**.  
   - Toggles **LED (1)** based on received data.  
   - Forwards a message `"LED ON"` to **Nano (3)** via **RS485 (Module 1)**.  

3. **Nano (3)**  
   - Receives RS485 data from **Nano (2)** through **RS485 (Module 2)**.  
   - Toggles **LED (2)** when the message is received.  

---

## Connection Flow

