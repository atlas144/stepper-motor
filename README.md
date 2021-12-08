# Stepper Motor library

## Description

A library that works as a simple interface which makes it easier to work with common stepper motors on the Arduino platform.

## API reference

- **StepperMotor**
  - *private attributes*
    - *int* pin1
      - the first pin of the motor coils
    - *int* pin2
      - the second pin of the motor coils
    - *int* pin3
      - the third pin of the motor coils
    - *int* pin4
      - the fourth pin of the motor coils
    - *int* stepDelay
      - delay after each step (determines the speed of continuous motor running)
  - *private methods*
    - *void* step1
      - executes one motor step (the first in the sequence) and waits for `stepDelay` (ms)
    - *void* step2
      - executes one motor step (the second in the sequence) and waits for `stepDelay` (ms)
    - *void* step3
      - executes one motor step (the third in the sequence) and waits for `stepDelay` (ms)
    - *void* step4
      - executes one motor step (the fourth in the sequence) and waits for `stepDelay` (ms)
    - *void* step5
      - executes one motor step (the fifth in the sequence) and waits for `stepDelay` (ms)
    - *void* step6
      - executes one motor step (the sixth in the sequence) and waits for `stepDelay` (ms)
    - *void* step7
      - executes one motor step (the seventh in the sequence) and waits for `stepDelay` (ms)
    - *void* step8
      - executes one motor step (the eight in the sequence) and waits for `stepDelay` (ms)
  - *public methods*
    - **constructor**
      - initializes attributes and sets up input pins
      - *arguments*:
        - *int* pin1 - see private attributes
        - *int* pin2 - see private attributes
        - *int* pin3 - see private attributes
        - *int* pin4 - see private attributes
        - *int* stepDelay - see private attributes
    - *int* getPin
      - returns address of given pin
      - *arguments*:
        - *uint8_t* pinNumber - number of desired pin
      - *returns*: address of desired pin
    - *int* getStepDelay
      - returns value of `stepDelay` parameter
      - *returns*: value of `stepDelay` parameter
    - *void* setStepDelay
      - changes value of step delay
      - *arguments*:
        - *int* stepDelay - new `stepDelay` value
    - *void* moveForward
      - executes one forward series of steps (from 1 to 8)
    - *void* moveBackwards
      - executes one backward series of steps (from 8 to 1)

## Testing

The library was tested with a 28BYJ-48 stepper motor.

## Dependencies

- none

## Contributing

Contributions are welcome!

## License

The library is licensed under the [MIT license](https://github.com/atlas144/stepper-motor/blob/main/LICENSE).
