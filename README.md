#  Arduino-Based-3-Floor-Elevator-System



# [cite\_start]This project presents the \*\*design and implementation of a 3-floor elevator prototype\*\*\[cite: 1, 20]. \[cite\_start]It was developed as a course project by \*\*Group 08\*\* \[cite: 2] \[cite\_start]for \*\*EEE 318\*\*\[cite: 1].

# 

# \[cite\_start]The study focuses on building a functional vertical transport system using an \*\*Arduino Uno\*\* \[cite: 10] \[cite\_start]to manage motor control and floor positioning\[cite: 30]. \[cite\_start]The system demonstrates how sensor feedback from \*\*reed switches\*\* \[cite: 24] \[cite\_start]can be used to automate movement and ensure the elevator stops accurately at designated levels\[cite: 26].

# 

# !\[elevator\_frame](Images/frame\_image.png)

# 

# \###### \*\*Key Features\*\*

# 

# \* \[cite\_start]\*\*Three-Floor Logic:\*\* Prototype built to navigate between three distinct levels\[cite: 20].

# \* \[cite\_start]\*\*Magnetic Position Sensing:\*\* Use of three \*\*reed switch sensors\*\* \[cite: 27] \[cite\_start]and magnets \[cite: 12] \[cite\_start]to detect the elevator's current position\[cite: 26].

# \* \[cite\_start]\*\*Keypad Interface:\*\* Integration of a keypad \[cite: 9] \[cite\_start]allowing users to select their destination floor\[cite: 22].

# \* \[cite\_start]\*\*Advanced Motor Control:\*\* Implementation of \*\*Pulse Width Modulation (PWM)\*\* to manage different speeds for upward and downward travel\[cite: 35].

# \* \[cite\_start]\*\*H-Bridge Integration:\*\* Use of an \*\*L293D motor driver\*\* \[cite: 14] \[cite\_start]to bridge low-voltage microprocessor signals with high-voltage motor requirements\[cite: 31, 32].

# 

# \###### \*\*System Overview\*\*

# 

# \* \[cite\_start]\*\*Test System:\*\* 3-Floor Elevator Prototype\[cite: 1].

# \* \[cite\_start]\*\*Main Controller:\*\* Arduino Uno\[cite: 10].

# \* \[cite\_start]\*\*Frame Material:\*\* Wood\[cite: 19].

# \* \*\*Simulation/Control Software:\*\* Arduino IDE (C++ based).

# \* \*\*Movement Components:\*\*

# &nbsp;   \* \[cite\_start]DC motor for mechanical rotation\[cite: 13, 34].

# &nbsp;   \* \[cite\_start]L293D motor driver with dual H-bridge\[cite: 28, 29].

# &nbsp;   

# 

# 

# \* \*\*Input/Output:\*\*

# &nbsp;   \* \[cite\_start]3 buttons on a keypad connected to Arduino pins\[cite: 22, 23].

# &nbsp;   \* \[cite\_start]Magnets and Reed switches for floor detection\[cite: 11, 12, 26].

# 

# \###### \*\*Operational Parameters\*\*

# 

# \* \[cite\_start]\*\*Upward Movement:\*\* PWM signal set to \*\*175\*\*\[cite: 35].

# \* \[cite\_start]\*\*Downward Movement:\*\* PWM signal set to \*\*30\*\*\[cite: 35].

# \* \[cite\_start]\*\*Off/Idle State:\*\* PWM signal set to \*\*50\*\*\[cite: 35].

# \* \[cite\_start]\*\*Sensory Feedback:\*\* Sensors detect magnetic fields to signal the Arduino to stop the motor\[cite: 25, 26, 30].

# 

# \###### \*\*Project Impact\*\*

# 

# This project demonstrates the practical application of \*\*microcontrollers in automation\*\* and mechanical control. \[cite\_start]It provides hands-on experience in integrating diverse hardware components—such as magnetic sensors, keypads, and motor drivers—to solve real-world engineering challenges in vertical transportation\[cite: 30, 31].

# 

# \###### \*\*Project Status\*\*

# 

# \[cite\_start]✅ \*\*Completed\*\* — Functional hardware demonstration verified for all three floors\[cite: 36].

# 

# \###### \*\*Contributors\*\*

# 

# \* \[cite\_start]\*\*Joy Saha (1706189)\*\* \[cite: 4]

# \* \[cite\_start]\*\*Ishtiaque Ahmed (1706190)\*\* \[cite: 5]

# \* \[cite\_start]\*\*Tasnim Rahman (1706191)\*\* \[cite: 6]

# \* \[cite\_start]\*\*Aong Shay Sing Marma (1706195)\*\* \[cite: 7]

# 

# \[cite\_start]\*\*Group No: 08\*\* \[cite: 2]

# 

# \###### \*\*License\*\*

# 

# This project is for academic and educational purposes only.

