#!/usr/bin/env python
import serial
import time

port = "/dev/serial0"
rate = 9600

sp = serial.Serial(port, baudrate = rate, timeout = 2)
# sp.flushInput()

try:
    sp.write("L100\n")
    # sp.write("R100")
except:
    print("Error")
