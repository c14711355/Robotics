//Acurate Turns

//Measure Diameter between center of two wheels (123mm ~) Store as variables. Have maths in code
//C = 2(pi)r = (pi)d
//C = 3.1415 *  == 386
//(pi)d == 3.1415.. * 66 = 207.35
//386/207.35 = 1.86rotations
//360 = 1 rotation , them 1.86 = 670

//(for 90 degree turn / 4)
/*
nMotorEncoderTarget[motorB] = 670;
nMotorEncoderTarget[motorB] = -670;

motor[motorB] = 20;
motor[motorB] = -20;
*/
//Test For 5 spins make sure ends in exactly same place

task main()
{
	float diameter = 123;
	float c;
	float pi = 3.1415;
	float diameter2 = 66;
	float pi_d;
	float turn1 , turn2;
	float roations1;


	c = pi * diameter;
	pi_d = pi * diameter2;
	turn1 = diameter / diameter2;
	rotations1 = 360 * turn1;


	nMotorEncoder[motorB] = 0;
	nMotorEncoder[motorB] = 0;

	while (nMotorEncoder[motorB] < rotations1)
	{
		motor[motorB] = 20;
		motor[motorC] = -20;

	}//end while()

	motor[motorB] = 0;
	motor[motorC] = 0;


}
