/*
  NAVER Software Education Project(Arduino): Control Two Motors
  Copyright (C) 2014  Kyoungchin SEO, NHN NEXT

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

int MOTOR_A_DIR = 12;
int MOTOR_A_BRAKE = 9;
int MOTOR_A_PWM = 3;

int MOTOR_B_DIR = 13;
int MOTOR_B_BRAKE = 8;
int MOTOR_B_PWM = 11;

int MOTOR_SPEED = 100;

void setup() 
{
  pinMode(MOTOR_A_DIR,OUTPUT);
  pinMode(MOTOR_A_BRAKE, OUTPUT);  
  pinMode(MOTOR_B_DIR,OUTPUT);
  pinMode(MOTOR_B_BRAKE,OUTPUT);
}

void loop() 
{
  digitalWrite(MOTOR_A_DIR,HIGH);
  digitalWrite(MOTOR_A_BRAKE, LOW);
  analogWrite(MOTOR_A_PWM,MOTOR_SPEED);
  
  digitalWrite(MOTOR_B_DIR,HIGH);
  digitalWrite(MOTOR_B_BRAKE,LOW);
  analogWrite(MOTOR_B_PWM,MOTOR_SPEED);
  
  delay(3000);
  
  digitalWrite(MOTOR_A_BRAKE, HIGH);
  digitalWrite(MOTOR_B_BRAKE, HIGH);
  
  delay(1000);
  
  digitalWrite(MOTOR_A_DIR,LOW);
  digitalWrite(MOTOR_A_BRAKE,LOW);
  analogWrite(MOTOR_A_PWM,MOTOR_SPEED);
  
  digitalWrite(MOTOR_B_DIR,LOW);
  digitalWrite(MOTOR_B_BRAKE,LOW);
  analogWrite(MOTOR_B_PWM,MOTOR_SPEED);
  
  delay(3000);
  
  digitalWrite(MOTOR_A_BRAKE, HIGH);
  digitalWrite(MOTOR_B_BRAKE, HIGH);
  
  delay(1000);
 
}
