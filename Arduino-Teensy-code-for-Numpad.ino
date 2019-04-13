#include <Bounce.h>

Bounce button0 = Bounce(0, 100);
Bounce button1 = Bounce(1, 100); 
Bounce button2 = Bounce(2, 100);
Bounce button3 = Bounce(3, 100);  
Bounce button4 = Bounce(4, 100);
Bounce button5 = Bounce(5, 100); 
Bounce button6 = Bounce(6, 100); 
Bounce button7 = Bounce(7, 100);  
Bounce button8 = Bounce(8, 100);
Bounce button9 = Bounce(9, 100);
Bounce button10 = Bounce(10, 100);
Bounce button11 = Bounce(11, 100); 
Bounce button12 = Bounce(12, 100); 
Bounce button14 = Bounce(14, 100);
Bounce button15 = Bounce(15, 100); 
Bounce button16 = Bounce(16, 100); 
Bounce button17 = Bounce(17, 100);  
Bounce button18 = Bounce(18, 100);
Bounce button19 = Bounce(19, 100);

boolean LED = true;

void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
}

void loop() {
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button14.update();
  button15.update();
  button16.update();
  button17.update();
  button18.update();
  button19.update();

  if (button0.fallingEdge()) {
    LED = !LED;
    digitalWrite(13, LED);
  }

  if (button1.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_7);
      Keyboard.release(KEYPAD_7);
    }
    else {
      Keyboard.press(KEY_HOME);
      Keyboard.release(KEY_HOME);
    }
  }

  if (button2.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_4);
      Keyboard.release(KEYPAD_4);
    }
    else {
      Keyboard.press(KEY_LEFT);
      Keyboard.release(KEY_LEFT);
    }
  }

  if (button3.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_1);
      Keyboard.release(KEYPAD_1);
    }
    else {
      Keyboard.press(KEY_END);
      Keyboard.release(KEY_END);
    }
  }

  if (button4.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_0);
      Keyboard.release(KEYPAD_0);
    }
    else {
      Keyboard.press(KEY_INSERT);
      Keyboard.release(KEY_INSERT);
    }
  }

  if (button5.fallingEdge()) {
    Keyboard.press(KEYPAD_0);
    Keyboard.release(KEYPAD_0);
    Keyboard.press(KEYPAD_0);
    Keyboard.release(KEYPAD_0);
  }

  if (button6.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_2);
      Keyboard.release(KEYPAD_2);
    }
    else {
      Keyboard.press(KEY_DOWN);
      Keyboard.release(KEY_DOWN);
    }
  }

  if (button7.fallingEdge()) {
    Keyboard.press(KEYPAD_5);
    Keyboard.release(KEYPAD_5);
  }

  if (button8.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_8);
      Keyboard.release(KEYPAD_8);
    }
    else {
      Keyboard.press(KEY_UP);
      Keyboard.release(KEY_UP);
    }
  }

  if (button9.fallingEdge()) {
    Keyboard.press(KEYPAD_SLASH);
    Keyboard.release(KEYPAD_SLASH);
  }

  if (button10.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_PERIOD);
      Keyboard.release(KEYPAD_PERIOD);
    }
    else {
      Keyboard.press(KEY_DELETE);
      Keyboard.release(KEY_DELETE);
    }
  }

  if (button11.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_3);
      Keyboard.release(KEYPAD_3);
    }
    else {
      Keyboard.press(KEY_PAGE_DOWN);
      Keyboard.release(KEY_PAGE_DOWN);
    }
  }

  if (button12.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_6);
      Keyboard.release(KEYPAD_6);
    }
    else {
      Keyboard.press(KEY_RIGHT);
      Keyboard.release(KEY_RIGHT);
    }
  }

  if (button14.fallingEdge()) {
    Keyboard.press(KEYPAD_ASTERIX);
    Keyboard.release(KEYPAD_ASTERIX);
  }

  if (button15.fallingEdge()) {
    Keyboard.press(KEYPAD_ENTER);
    Keyboard.release(KEYPAD_ENTER);
  }

  if (button16.fallingEdge()) {
    Keyboard.press(KEY_BACKSPACE);
    Keyboard.release(KEY_BACKSPACE);
  }

  if (button17.fallingEdge()) {
    Keyboard.press(KEYPAD_PLUS);
    Keyboard.release(KEYPAD_PLUS);
  }

  if (button18.fallingEdge()) {
    Keyboard.press(KEYPAD_MINUS);
    Keyboard.release(KEYPAD_MINUS);
  }

  if (button19.fallingEdge()) {
    if (LED == true) {
      Keyboard.press(KEYPAD_9);
      Keyboard.release(KEYPAD_9);
    }
    else {
      Keyboard.press(KEY_PAGE_UP);
      Keyboard.release(KEY_PAGE_UP);
    }
  }
}
