import serial
import time

arduino = serial.Serial('/dev/ttyUSB0', 9600)
print(arduino.is_open)

def push(msg):
    arduino.write(str.encode(msg))


def connection():
    arduino.inWaiting()
    time.sleep(1)

