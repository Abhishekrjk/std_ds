#define m1f 10
#define m1r 11
#define m2r 12
#define m2f 13
// 
char t;
void setup() {
  pinMode(m1f, OUTPUT);
  pinMode(m1r, OUTPUT);
  pinMode(m2r, OUTPUT);
  pinMode(m2f, OUTPUT);

  Serial.begin(9600);  
}

void loop() {
  if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
if(t == 'F'){            //move forward(all motors rotate in forward direction)
 digitalWrite(m1f,HIGH);
  digitalWrite(m1r,LOW);
  digitalWrite(m2f,HIGH);
  digitalWrite(m2r,LOW);
}
else if(t == 'B'){      //move reverse (all motors rotate in reverse direction)
  digitalWrite(m1f,LOW);
  digitalWrite(m1r,HIGH);
  digitalWrite(m2f,LOW);
  digitalWrite(m2r,HIGH);
  }
else if(t == 'S'){      //STOP 
  digitalWrite(m1f,LOW);
  digitalWrite(m1r,LOW);
  digitalWrite(m2f,LOW);
  digitalWrite(m2r,LOW);
  }
else if(t == 'R'){      //STOP 
  digitalWrite(m1f,HIGH);
  digitalWrite(m1r,LOW);
  digitalWrite(m2f,LOW);
  digitalWrite(m2r,HIGH);
  }
else if(t == 'L'){      //STOP 
  digitalWrite(m1f,LOW);
  digitalWrite(m1r,HIGH);
  digitalWrite(m2f,HIGH);
  digitalWrite(m2r,LOW);
  }
}