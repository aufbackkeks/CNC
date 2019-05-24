# Roadmap for the development of a CNC

1. Connection and Protocol between PC and Arduino
2. Interpretation of 3D Models
3. Conversion of 3D Models into 2D Planes
4. Conversion from 2D Planes in Commands for the Arduino

## Connection and Protocol between PC and Arduino
On the lowest level the PC sends commands through
Serial to the Arduino and the Arduino executes them.

## Interpretation of 3D Models
Import and read 3D Models from Files on a PC

## Conversion of 3D Models into 2D Planes
Each plane in a 3D models is processed seperatly,
thus split the model into 2D Planes.

## Conversion from 2D Planes in Commands for the Arduino
Take the 2D Planes and convert them into commands for the
Arduino, to be send over the Connection discussed initially.
