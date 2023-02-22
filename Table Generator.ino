void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);//serail communication/board setup
}
void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Enter integer value   =");//message for user
while(Serial.available()==0)//check memory status
{}//infinite loop
int a;
a = Serial.parseInt();//only reads integer value and store in varaible a         that's why parseint
for(int i=1; i<=10; i++)//
{
Serial.print(a);
Serial.print(" x ");// here x is a text or string it will only print x
Serial.print(i);
Serial.print("=");
Serial.print(a*i);
Serial.println();
}//loop body
while(1)//run only over true condition otherwise will stop
{}// infinite loop
}
