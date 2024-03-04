//Basics of 'Embedded Systems'
//Forms basics of machine learning,IOT D(didn't remember what he said particularly)

//To print hello world from 'aurdino uno'
/*
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  Serial.print("Hello World");
}
*/

/*
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT); //To define the pin we are using,'INPUT' coz 'temp sensor' is an 'input device'
}

void loop()
{
  int temp = analogRead(A0);  //The temp. range will only be shown when you'll 'Start SImulation'
  Serial.println(temp);    //at 125 it(output) is 358 and at -40 its 20
}
*/


void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT); //To define the pin we are using,'INPUT' coz 'temp sensor' is an 'input device'
}

void loop()
{
  int temp = analogRead(A0);  //The temp. range will only be shown when you'll 'Start SImulation'
  temp = map(temp,20,358,-40,125); //mapping it, have putten these nos. coz as we change the ranges this is how it varies from the 'lowest range' to the 'highest range'
  Serial.println(temp);      //Now the output is '24' and our aim is '25. 1 is error, no prob. as errors come, this can be resolved and the '25' can be obtained if we use 'float' in place of 'int'
}
/*The thing works fully on the Tkintercad 'Code' section with Aurdino UNO and a temp. sensor*/