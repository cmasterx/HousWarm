#!/usr/bin/env python

# based on tutorials:
#   http://www.roman10.net/serial-port-communication-in-python/
#   http://www.brettdangerfield.com/post/raspberrypi_tempature_monitor_project/

import serial, time

SERIALPORT = "/dev/ttyAMA0"

BAUDRATE = 19200

ser = serial.Serial(SERIALPORT, BAUDRATE)

ser.bytesize = serial.EIGHTBITS #number of bits per bytes

ser.parity = serial.PARITY_NONE #set parity check: no parity

ser.stopbits = serial.STOPBITS_ONE #number of stop bits

#ser.timeout = None          #block read

#ser.timeout = 0             #non-block read

ser.timeout = None              #timeout block read

ser.xonxoff = False     #disable software flow control

ser.rtscts = False     #disable hardware (RTS/CTS) flow control

ser.dsrdtr = False       #disable hardware (DSR/DTR) flow control

ser.writeTimeout = 0     #timeout for write

print('Starting Up Serial Monitor')

try:
    ser.open()

except:
    print ("error open serial port: ")
    exit()
if ser.isOpen():

    try:

        ser.flushInput() #flush input buffer, discarding all its contents

        ser.flushOutput()#flush output buffer, aborting current output

        ser.write("ATI")

        print("write data: ATI\r\n")

        time.sleep(0.5)

        numberOfLine = 0

        while True:

            response = ser.readline()

            print("read data: " + response)

            numberOfLine = numberOfLine + 1
            if (numberOfLine >= 5):
                break

        ser.close()

    except:
        print ("error communicating...: " + str(e))

else:
    print ("cannot open serial port ")