const int button1 = 2;                                         
const int button2 = 3; 
const int buzzerLed1 = 4;                                     
const int buzzerLed2 = 5;
int saklar1 = 0;                                                     
int saklar2 = 0;
int buttonState1 = 0;                                           
int buttonState2 = 0;
 void setup() 
{
  pinMode (button1, INPUT);                               //pin button1 sebagai input
  pinMode (button2, INPUT);
  pinMode (buzzerLed1, OUTPUT);                    //buzzerLed1 sebagai output
  pinMode (buzzerLed2, OUTPUT);
 
}
void loop ()
{
  buttonState1 = digitalRead (button1);               //membaca sinyal digital (digitalRead) dari
  buttonState2 = digitalRead (button2);               //pin button1,2,3
 
                                                                              //Pernyataan perulangan kontrol struktur if
  
  if (  buttonState1 == HIGH )                                                   //persyaratan if tidak sama dengan 0
  {
    digitalWrite (buzzerLed1, HIGH);                   //pin buzzerLed1 = high
    digitalWrite (buzzerLed2, LOW);                    //pin buzzerLed2 = low
   // digitalWrite (buzzerLed3, LOW);
   // memori =1;
    //delay(400);
  
  }
 
   if (  buttonState2==HIGH )
   {
          //digitalWrite (buzzerLed1, LOW);
          digitalWrite (buzzerLed2, HIGH);
         // digitalWrite (buzzerLed3, LOW);
          //memori =1;
          //delay(400);
        
   }
 
 /*  else if (saklar3 ==1 )
 
    {
              //  digitalWrite (buzzerLed1, LOW);
              //  digitalWrite (buzzerLed2, LOW);
                digitalWrite (buzzerLed3, HIGH);
               // memori =1;
                //delay(400);
              
     }*/
    else if (  buttonState1== LOW)
 
    {
                digitalWrite (buzzerLed1, LOW);
             //   digitalWrite (buzzerLed2, LOW);
             //   digitalWrite (buzzerLed3, LOW);
             //   memori =1;
                //delay(400);
              
     }

        else if (  buttonState2== LOW )
 
    {
                digitalWrite (buzzerLed2, LOW);
             //   digitalWrite (buzzerLed2, LOW);
             //   digitalWrite (buzzerLed3, LOW);
             //   memori =1;
                //delay(400);
              
     }
    /*    else if (saklar3 == 0 )
 
    {
                digitalWrite (buzzerLed3, LOW);
             //   digitalWrite (buzzerLed2, LOW);
             //   digitalWrite (buzzerLed3, LOW);
             //   memori =1;
                //delay(400);
              
     }*/
     

  //delay (tunda);
  
}
