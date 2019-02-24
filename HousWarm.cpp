#include <iostream>
#include <string>
#include <stdio.h>
#include <errno.h>

#include <wiringPi.h>
#include <wiringSerial.h>

int main()
{
    int fd;
    int count;

    fd = serialOpen("/dev/ttyAMA0", 9600);
    wiringPiSetup();

    std::string str;
    
    std::cin >> str;
    
    serialPuts(fd, str);

    return 0;
}