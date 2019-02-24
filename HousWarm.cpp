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

    std::string str = "L100";
    
//    std::cin >> str;
//    str += '\n';

    serialPuts(fd, str.c_str());

    return 0;
}
