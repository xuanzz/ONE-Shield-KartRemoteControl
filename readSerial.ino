String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete

void serialSetup() {
  // initialize serial:
  Serial1.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
}

void serialRead() {
  serialEvent(); //call the function
  // print the string when a newline arrives:
  if (stringComplete) {
    if (inputString == "A" || inputString == "a") //modified for BLEJoystick app (iOS) //forward
    {
    }
    else if (inputString == "C" || inputString == "c")//backward
    {
    }
    else if (inputString == "D" || inputString == "d")//turn left
    {
    }
    else if (inputString == "B" || inputString == "b")//turn right
    {
    }
    else if (inputString == "H" || inputString == "h") //square
    {
    }
    else if (inputString == "G" || inputString == "g") //cross
    {
      analogWrite(2, 0);
      analogWrite(3, 255);
      Running = 0;
    }
    else if (inputString == "E" || inputString == "e") //trangle
    {
    }
    else if (inputString == "F" || inputString == "f") //circle
    {
      analogWrite(2,255);
      analogWrite(3, 0);
      Running = 1;
    }
    else
    {
    }
    // clear the string:
    inputString = "";
    stringComplete = false;
  }
}

void serialEvent() {
  while (Serial1.available()) {
    // get the new byte:
    char inChar = (char)Serial1.read();
    inputString += inChar;
    stringComplete = true;
    // add it to the inputString:
    /* if (inChar == '\n') {
       stringComplete = true;
      }
      else
      {
       inputString += inChar;
      }*/

    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:

  }
}
