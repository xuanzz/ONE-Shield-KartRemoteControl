void pinSetup()
{
pinMode(14,OUTPUT);
pinMode(5,OUTPUT);
pinMode(2,OUTPUT); //green
pinMode(3,OUTPUT); //red
analogWrite(2, 255);
Running = 1;
}

void motorMove(int leftSpeed, int rightSpeed)
{
}
