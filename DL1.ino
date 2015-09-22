//PICARD Data Logging Script 1

//This sketch was written by: Michael McCallum

//This sketch records the data during the PICARD experiment and writes it to Serial for observation
// See sketch flow chart in the SED

//includes

#include <SPI.h>
#include <SD.h>
#include <EEPROM.h>

//constants

const int chipSelect = 9;

//Files

File dataFile;

//EEPROM variables, start reading from the first byte (address 0) of the EEPROM

int addr = 0;

//variables

byte x;

void setup()
{
  Serial.begin(9600);                        // Open serial communications and wait for port to open
  Serial.print("Initializing SD card...");   // make sure that the default chip select pin is set to 
  pinMode(SS, OUTPUT);                       // output, even if you don't use it
  if (!SD.begin(chipSelect)) {               // see if the card is present and can be initialized
    Serial.println("Card failed, or not present");
    while (1) ;                               // don't do anything more
  }
  Serial.println("card initialized.");
  
int v = 0;                            //initiate loop
for (int v = 0; v < 180; v = v + 1)   //loop 180 times
{
x = EEPROM.read(addr); //read eeprom
  Serial.println(x);   //write to serial
 {
  if (x <= 10) 
{
  int a = 0;                          //initiate loop
  for (int a = 0; a < 10; a = a + 1)  //loop 10 times
  {
  dataFile = SD.open("A.txt", FILE_WRITE);       // Open up the file we're going to log to - A
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;                                  // Wait forever since we cant write data
  }
  String dataString = "";                                 // make a string for assembling the data to log
  for (int analogPin = 0; analogPin < 6; analogPin++) {   // read three sensors and append to the string
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString); //print to file
  Serial.println(dataString);   // print to the serial port
  // The following line will 'save' the file to the SD card after every
  // line of data - this will use more power and slow down how much data
  // you can read but it's safer! 
  // If you want to speed up the system, remove the call to flush() and it
  // will save the file only every 512 bytes - every time a sector on the 
  // SD card is filled with data.
  dataFile.flush();
  delay(100);   // Take 1 measurement every 100 milliseconds
  dataFile.close();
  }
} 
{
if (x > 10)
{
  if (x <= 20)
  {
  int b = 0;
  for (int b = 0; b < 10; b = b + 1)
  {
  dataFile = SD.open("B.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
  if (x > 20)
{
  if (x <= 30)
  {
      int c = 0;
  for (int c = 0; c < 10; c = c + 1)
  {
  dataFile = SD.open("C.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x > 30)
{
  if (x <= 40)
  {
  int d = 0;
  for (int d = 0; d < 10; d = d + 1)
  {
  dataFile = SD.open("D.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x>40)
{ 
  if (x<=50)
{
    int e = 0;
  for (int e = 0; e < 10; e = e + 1)
  {
  dataFile = SD.open("E.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
}
{
if (x > 50)
{
  if (x <= 60)
  {
  int f = 0;
  for (int f = 0; f < 10; f = f + 1)
  {
  dataFile = SD.open("F.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
  if (x > 60)
{
  if (x <= 70)
  {
      int g = 0;
  for (int g = 0; g < 10; g = g + 1)
  {
  dataFile = SD.open("G.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x > 70)
{
  if (x <= 80)
  {
  int h = 0;
  for (int h = 0; h < 10; h = h + 1)
  {
  dataFile = SD.open("H.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x > 80)
{ 
 if (x <= 90)
{
    int j = 0;
  for (int j = 0; j < 10; j = j + 1)
  {
  dataFile = SD.open("J.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
}
if (x > 90)
{
  if (x <= 100)
  {
  int k = 0;
  for (int k = 0; k < 10; k = k + 1)
  {
  dataFile = SD.open("K.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
  if (x > 100)
{
  if (x <= 110)
  {
      int l = 0;
  for (int l = 0; l < 10; l = l + 1)
  {
  dataFile = SD.open("L.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x > 110)
{
  if (x <= 120)
  {
  int m = 0;
  for (int m = 0; m < 10; m = m + 1)
  {
  dataFile = SD.open("M.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x>120)
{ 
  if (x<=130)
{
    int n = 0;
  for (int n = 0; n < 10; n = n + 1)
  {
  dataFile = SD.open("N.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
}
{
if (x > 130)
{
  if (x <= 140)
  {
  int p = 0;
  for (int p = 0; p < 10; p = p + 1)
  {
  dataFile = SD.open("P.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
  if (x > 140)
{

  if (x <= 150)
  {
      int q = 0;
  for (int q = 0; q < 10; q = q + 1)
  {
  dataFile = SD.open("Q.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x > 150)
{
  if (x <= 160)
  {
  int r = 0;
  for (int r = 0; r < 10; r = r + 1)
  {
  dataFile = SD.open("R.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";

  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x > 160)
{
  if (x <= 170)
  {
  int s = 0;
  for (int s = 0; s < 10; s = s + 1)
  {
  dataFile = SD.open("S.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}
  }
if (x > 170)
{
  int t = 0;
  for (int t = 0; t < 10; t = t + 1)
  {
  dataFile = SD.open("T.txt", FILE_WRITE);
  if (! dataFile) {
    Serial.println("error opening datalog.txt");
    while (1) ;
  }
  String dataString = "";
  for (int analogPin = 0; analogPin < 6; analogPin++) {
    int sensor = analogRead(analogPin);
    dataString += String(sensor);
    if (analogPin < 5) {
      dataString += " "; 
    }
  }
  dataFile.println(dataString);
  Serial.println(dataString);
  dataFile.flush();
  delay(100);
  dataFile.close();
}}}}}}}}}}}}}}}}}}}}}
x = x + 1;           //increment loop
EEPROM.write(0,x);   //write new x to eeprom
}}}
void loop() {}
