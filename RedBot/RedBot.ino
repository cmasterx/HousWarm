/*
 * Redbot Serial to Drive program
 * 
 * Redbot listens for serial port and sets speed
 */

#include <RedBot.h>

RedBotMotors motors;

void setup()
{
    Serial.begin(9600);
    Serial.println("Setting up");
    //  motors.drive(150);
    //  motors.stop();
    Serial.println("Done!");
}

void loop()
{
    // put your main code here, to run repeatedly:
    if (Serial.available())
    {

        String in = Serial.readString();

        if (true)
        {

            //      Serial.println(in.length());

            switch (in.charAt(0))
            {
            case 'L':
            case 'l':
                motors.leftMotor(in.substring(1).toInt());
                //        Serial.println(in.substring(1));
                break;
            case 'R':
            case 'r':
                motors.rightMotor(in.substring(1).toInt());
                //          Serial.println(in.substring(1));
                break;
            }
        }
    }
}