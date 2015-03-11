

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
