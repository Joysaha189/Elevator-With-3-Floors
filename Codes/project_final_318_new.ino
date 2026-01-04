#include <Wire.h>
#include <Keypad.h>

const int ROW_NUM = 1; 
const int COLUMN_NUM = 3;
const int pwm=9;
int keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3'}
};

byte pin_rows[ROW_NUM] = {2}; //connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {3,4,5}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

//Variable to control loop input
bool control = 0;
bool not_pos = 0;

//Control variables for iterating in for loops
int i = 0, j = 0;

//Variables used to store the current position of the elevator and the position desired by the user
int actual_pos = 0, des_pos = 0;

//Vectors to store the positions of the elevator (sensor) and the position desired by the user (order)
int sensor[3];
int order[3];

void setup()
{
 pinMode(pwm,OUTPUT);

for(int i = 6; i < 9; i++)
{
  pinMode(i, INPUT);
}

for(int i = 0; i<3; i++)
{
  order[i] = 1;
}

//Configuring the motor control pins as digital outputs
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

//Commands for the engine to stop
digitalWrite(10, LOW);
digitalWrite(11, LOW);
analogWrite(pwm,50);
}

void loop()
{
int key = keypad.getKey();

//Reading the buttons selected by the elevator user
for(int key = 1; key <= 3; key++)
{
  //Store the state of each button in the requested vector
  order[key-1] = digitalRead(key);
  
  //Check which floor you want the elevator to go up
  if(order[key-1] == 0)
  {
    des_pos = key ;
    control = 0;
  }
  
}

//Checks if one of the buttons was pressed and if the control variable has a value equal to 0
if((order[0] == 0 || order[1] == 0 || order[2] == 0) && control == 0)
{   

    //Set a value of 1 to the control variable to allow the code stream to enter the condition only once
    control = 1;
    
    //Execute the loop commands while the control variable is equal to 1
    
      
          //Reading of all sensors to determine the current position of the elevator
          for(int sens = 6; sens < 9; sens++)
          {
            sensor[sens-6] = digitalRead(sens);
          }
            
          //Comparing the current elevator position with the desired position
          for(i = 0; i<3; i++)
          {
              
              if(sensor[i] == 1)
              {
                break;
              }
                  
          }

          for(j = 0; j<3; j++)
          {
              
            if(order[j] == 0)
            {
              break;
            }
        
          }

              if(j == i)
              {
                  digitalWrite(10, HIGH);
                  digitalWrite(11, LOW);
                  analogWrite(pwm,50);
              }
      
                if(j < i)
                {
                  digitalWrite(10, HIGH);
                  digitalWrite(11, LOW);  
                  analogWrite(pwm,30);           
                }
      
              if(j > i) //2 > 0
              {
                  digitalWrite(10, HIGH);
                  digitalWrite(11, LOW);
                  analogWrite(pwm,175);
              }
                      
    control = 0;
    not_pos = 0;


while(not_pos != 1)
{
  
  //Determining the current position of the elevator
  for(int sens = 6; sens < 9; sens++)
  {
   bool s = digitalRead(sens);

     if(s == 1)
     {
      actual_pos = sens - 5; 
     }
  }

   if(actual_pos == des_pos)
   { 
     
     digitalWrite(10, HIGH);
     digitalWrite(11, LOW);
     analogWrite(pwm,50);
     not_pos = 1;

     for(int i = 0; i<3; i++)
      {
        order[i] = 1;
        sensor[i] = 0;
      }

     break;
   }
}
  
}

}
