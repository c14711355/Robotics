//Acurate Turns

//Measure Diameter between center of two wheels (123mm ~) Store as variables. Have maths in code
//C = 2(pi)r = (pi)d
//C = 3.1415 *  == 386
//(pi)d == 3.1415.. * 66 = 207.35
//386/207.35 = 1.86rotations
//360 = 1 rotation , them 1.86 = 670

nMotorEncoderTarget[motorB] = 670;
nMotorEncoderTarget[motorB] = -670;

motor[motorB] = 20;
motor[motorB] = -20;

//Test For 5 spins make sure ends in exactly same place
