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
    motors.leftMotor(150);
    motors.rightMotor(150);
    delay(1000);
    motors.stop();
    delay(2000);
    motors.leftMotor(-150);
    motors.rightMotor(-150);
    delay(1000);
    motors.stop();
    delay(2000);

    motors.leftMotor(150);
    motors.rightMotor(-150);
    delay(1000);
    motors.stop();
    delay(2000);

    motors.leftMotor(-150);
    motors.rightMotor(150);
    delay(1000);
    motors.stop();
    delay(2000);
}