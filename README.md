# **Line Follower Robot**

This repository contains the code and documentation for a Line Follower Robot project. The robot is programmed to follow a line on the ground using infrared sensors to detect the path. It is a popular beginner project in robotics and embedded systems, often used in competitions and as an educational tool to demonstrate basic autonomous navigation.

## **Features**
- Follows a black line on a white surface using infrared sensors
- Adjusts motor speeds to steer the robot based on sensor input
- Utilizes basic control algorithms to ensure smooth movement along the path

## **Components Used**
Microcontroller: Arduino UNO (e.g., Arduino/ESP32/AVR, based on your project) 
Sensors: Infrared (IR) sensors to detect the line (single or array of IR sensors based on the size of your robot)
Motors: Two DC motors for driving the wheels
Motor Driver: L298N or similar motor driver module to control motor speed and direction
Power Supply: 11.1V Lithium ion battery ( based on the spec of your components especially motor)
Chassis: Robot frame for mounting components

## **How It Works**
The infrared sensors are positioned at the front of the robot to detect the presence of a line.
The microcontroller reads the sensor values and determines the position of the line relative to the robot.
Based on the sensor readings, the microcontroller adjusts the speed of the motors to steer the robot back onto the line.
The robot continues to follow the line using this feedback loop.

## Code Explanation
The code uses basic control logic to read sensor inputs and adjust the motor outputs.

- Sensor Reading: The code reads the values from the IR sensors to detect the presence of the line.
- Motor Control: Based on the sensor input, the motor speeds are adjusted to steer the robot. The motor driver receives signals from the microcontroller to change the speed and direction of the motors.
- A simple algorithm checks the sensor states and adjusts the motor speeds to maintain the robot on the line.

## Future Improvements
Implement PID control for more accurate line following.
