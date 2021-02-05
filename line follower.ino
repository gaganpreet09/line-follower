int speed1=200;
int speed2=150;
int speed3=150;
void setup() {pinMode(5,OUTPUT);//left live
pinMode(6,OUTPUT);//left grnd
pinMode(10,OUTPUT);//right live
pinMode(11,OUTPUT);//right grnd
  // put your setup code here, to run once:

}

void loop() {int a1=digitalRead(2);
int a2=digitalRead(7);
int a3=digitalRead(8);
int a4=digitalRead(4);
int a5=digitalRead(12);
int a6=digitalRead(13);
if((a1==1&&a2==1&&a3==0&&a4==0&&a5==1&&a6==1)||//forward
    (a1==1&&a2==1&&a3==1&&a4==0&&a5==1&&a6==1)||
     (a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0)||
    (a1==1&&a2==1&&a3==0&&a4==1&&a5==1&&a6==1))
    {analogWrite(5,speed1);
    analogWrite(6,0);
    analogWrite(10,speed1);
    analogWrite(11,0);
    }
else if((a1==1&&a2==0&&a3==0&&a4==1&&a5==1&&a6==1)||//left turn
        (a1==1&&a2==0&&a3==0&&a4==0&&a5==1&&a6==1)||
        (a1==1&&a2==0&&a3==1&&a4==1&&a5==1&&a6==1))
        {
          analogWrite(5,0);
          analogWrite(6,0);
          analogWrite(10,speed2);
          analogWrite(11,0);
        }
        else if((a1==0&&a2==0&&a3==1&&a4==1&&a5==1&&a6==1)||//sharp left
                 (a1==0&&a2==0&&a3==0&&a4==1&&a5==1&&a6==1)||
                 (a1==0&&a2==0&&a3==0&&a4==0&&a5==1&&a6==1)||
                 (a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==1)||
                 (a1==0&&a2==1&&a3==0&&a4==0&&a5==1&&a6==1))
                 {
                  analogWrite(5,0);
                  analogWrite(6,speed2);
                  analogWrite(10,speed2);
                  analogWrite(11,0);
                 
                 }

else if((a1==1&&a2==1&&a3==0&&a4==0&&a5==0&&a6==1)||//right turn
         (a1==1&&a2==1&&a3==1&&a4==0&&a5==0&&a6==1)||
         (a1==1&&a2==1&&a3==1&&a4==1&&a5==0&&a6==1))
         {
          analogWrite(5,speed3);
          analogWrite(6,0);
          analogWrite(10,0);
          analogWrite(11,0);
         }
         else if((a1==1&&a2==1&&a3==1&&a4==1&&a5==0&&a6==0)||//sharp right
                 (a1==1&&a2==1&&a3==1&&a4==0&&a5==0&&a6==0)||
                 (a1==1&&a2==1&&a3==0&&a4==0&&a5==0&&a6==0)||
                 (a1==1&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0)||
                 (a1==1&&a2==1&&a3==0&&a4==0&&a5==1&&a6==0))
                 {
                  analogWrite(5,speed3);
                  analogWrite(6,0);
                  analogWrite(10,0);
                  analogWrite(11,speed3);
                 }
                 else
                 {
                  analogWrite(5,speed1);
                  analogWrite(6,0);
                  analogWrite(10,speed1);
                  analogWrite(11,0);
                 }
         
  // put your main code here, to run repeatedly:

}
