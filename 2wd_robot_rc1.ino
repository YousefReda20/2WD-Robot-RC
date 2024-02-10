const int in1=4;
const int in2=3;
const int in3=5;
const int in4=6;
void setup()
{
  pinMode(4,1);
  pinMode(3,1);
  pinMode(5,1);
  pinMode(6,1);
  Serial.begin(9600);
}

void loop()
{
 if (Serial.available()) {
    char reading=Serial.read();
    if(reading=='f'){
      digitalWrite(in1,1);
      digitalWrite(in2,0);
      digitalWrite(in3,1);
      digitalWrite(in4,0);
    }
    else if(reading=='b'){
      digitalWrite(in1,0);
      digitalWrite(in2,1);
      digitalWrite(in3,0);
      digitalWrite(in4,1);
    }
    else if(reading=='r'){
      digitalWrite(in1,1);
      digitalWrite(in2,0);
      digitalWrite(in3,0);
      digitalWrite(in4,0);
    }
    else if(reading=='l'){
      digitalWrite(in1,0);
      digitalWrite(in2,0);
      digitalWrite(in3,1);
      digitalWrite(in4,0);
    }
    else if(reading=='s'){
      digitalWrite(in1,0);
      digitalWrite(in2,0);
      digitalWrite(in3,0);
      digitalWrite(in4,0);
    }
  
  
 }
}