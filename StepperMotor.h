#ifndef STEPPER_MOTOR_H
#define STEPPER_MOTOR_H

#include <Arduino.h>

class StepperMotor {
  private:
    uint8_t pin1;
    uint8_t pin2;
    uint8_t pin3;
    uint8_t pin4;
    uint8_t stepDelay;

    void step1();
    void step2();
    void step3();
    void step4();
    void step5();
    void step6();
    void step7();
    void step8();

  public:
    StepperMotor(uint8_t pin1, uint8_t pin2, uint8_t pin3, uint8_t pin4, uint8_t stepDelay);
    uint8_t getPin(uint8_t pinNumber);
    uint8_t getStepDelay();
    void setStepDelay(uint8_t stepDelay);
    void moveForward();
    void moveBackwards();
};

#endif
