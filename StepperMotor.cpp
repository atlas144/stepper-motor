#include "StepperMotor.h"

void StepperMotor::step1() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(stepDelay);
}

void StepperMotor::step2(){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(stepDelay);
}

void StepperMotor::step3(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(stepDelay);
}

void StepperMotor::step4(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
  delay(stepDelay);
}

void StepperMotor::step5(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);
  delay(stepDelay);
}

void StepperMotor::step6(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);
  delay(stepDelay);
}

void StepperMotor::step7(){
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  delay(stepDelay);
}

void StepperMotor::step8(){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, HIGH);
  delay(stepDelay);
}

StepperMotor::StepperMotor(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, uint8_t stepDelay) : pin1(pin1), pin2(pin2), pin3(pin3), pin4(pin4), stepDelay(stepDelay) {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

uint8_t StepperMotor::getPin(uint8_t pinNumber) {
  switch (pinNumber) {
    case 1: {
      return pin1;
    } case 2: {
      return pin2;
    } case 3: {
      return pin3;
    } case 4: {
      return pin4;
    } default: {
      return -1;
    }
  }
}

uint8_t StepperMotor::getStepDelay() {
  return stepDelay;
}

void StepperMotor::setStepDelay(uint8_t stepDelay) {
  this->stepDelay = stepDelay;
}

void StepperMotor::moveForward() {
  step1();
  step2();
  step3();
  step4();
  step5();
  step6();
  step7();
  step8();
}

void StepperMotor::moveBackwards() {
  step8();
  step7();
  step6();
  step5();
  step4();
  step3();
  step2();
  step1();
}
