#include <Arduino.h>
#include <RB_Motor.h>
#include <RB_Movement.h>
#include <Wire.h>

void setup() {
	Serial.begin(9600);
	//while (!Serial.available()) {}
	pinMode(A0, INPUT);
}

Movement move(3,5,6,9,10,11);
int lastMillis1 = 0;
int lastMillis2 = 0;
int lastMillis3 = 0;

void loop() {
  int m = millis();
  if (digitalRead(A0) == 1)
  {
    if (m - lastMillis1 > 20)
    {
      Serial.print(0);
    }
    else
    {
      Serial.print(1);
    }
  }
  else
  {
    Serial.print(1);
    lastMillis1 = m;
  }
  if (digitalRead(A1) == 1)
  {
    if (m - lastMillis2 > 20)
    {
      Serial.print(0);
    }
    else
    {
      Serial.print(1);
    }
  }
  else
  {
    Serial.print(1);
    lastMillis2 = m;
  }
  if (digitalRead(A2) == 1)
  {
    if (m - lastMillis3 > 20)
    {
      Serial.println(0);
    }
    else
    {
      Serial.println(1);
    }
  }
  else
  {
    Serial.println(1);
    lastMillis3 = m;
  }
	
  //Serial.println(digitalRead(A0));
	//delay(1000)
	/*
	move.moveStraight(0, 50);
	delay(500);
	
	move.moveStraight(60, 50);
	delay(500);
	move.moveStraight(120, 50);
	delay(500);
	move.moveStraight(180, 50);
	delay(500);
	move.moveStraight(240, 50);
	delay(500);
	move.moveStraight(300, 50);
	delay(500);*/
}
