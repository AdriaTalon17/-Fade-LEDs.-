/**********************************************************************************
**                                                                               **
**                              Fade LEDs                                        **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************


//********** Variables ************************************************************


//********** Setup ****************************************************************
void setup()
{
  const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
const int buttonPin = 2;
int velocitat = 500;         // velocitat de l'acció en ms


}


//********** Loop *****************************************************************
void loop()
{
  if (digitalRead(buttonPin) == 0)
  {analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

  delay (500);

  analogWrite(led0, 64);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

    delay (500);

  analogWrite(led0, 127);     // posar PWM del pin 3 a 60
  analogWrite(led1, 64);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

    delay (500);

  analogWrite(led0, 191);     // posar PWM del pin 3 a 60
  analogWrite(led1, 127);     // posar PWM del pin 5 a 60
  analogWrite(led2, 64);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

    delay (500);

   analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 191);     // posar PWM del pin 5 a 60
  analogWrite(led2, 127);     // posar PWM del pin 6 a 60
  analogWrite(led3, 64);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

    delay (500);

  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 191);     // posar PWM del pin 9 a 60
  analogWrite(led4, 127);     // posar PWM del pin 10 a 60
  analogWrite(led5, 64);     // posar PWM del pin 11 a 60

    delay (500);

 
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 191);     // posar PWM del pin 10 a 60
  analogWrite(led5, 127);     // posar PWM del pin 11 a 60

    delay (500);
    
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
  analogWrite(led5, 191);     // posar PWM del pin 11 a 60

    delay (500);

  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
  analogWrite(led5, 255);     // posar PWM del pin 11 a 60

    delay (500);

          }
          else
          {{
  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    // posar PWM del pin 3 a 255
  analogWrite(led1, 255);    // posar PWM del pin 5 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 255);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
}


          }
 }
//********** Funcions *************************************************************

