import serial

arduino = serial.Serial('/dev/ttyUSB0', 9600)


def push(msg):
    arduino.write(str.encode(msg))


def connection():
    con = "connection"
    arduino.write(str.encode(con))

