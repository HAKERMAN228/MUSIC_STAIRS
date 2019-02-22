
/*
 * СКЕТЧ К ПРОЕКТУ "МУЗЫКАЛЬНАЯ ЛЕСТНИЦА"
 * КОМАНДА R118
*/
//*****************НАСТРОЙКИ*********************
#include <NewPing.h> //подключение библиотека
#define PIN_C4  13  //пин датчика ноты До (первая лестница)
#define PIN_D4  12  //пин датчика ноты Ре (вторая лестница)
#define PIN_E4  11  //пин датчика ноты Ми (третья лестница)
#define PIN_F4  10  //пин датчика ноты Фа (четвертая лестница)
#define PIN_G4  9   //пин датчика ноты Соль (пятая лестница)
#define PIN_A4  8   //пин датчика ноты Ля   (шестая лестница)
#define PIN_B4  7   //пин датчика ноты Си   (седьмая лестница)
#define PIN_C5  6   //пин датчика ноты Довторая актава (восьмая лестница)
#define MAX_DISTANCE 200 //максимальная дистанция(выбираем програмнно)
#define BUZZ 5 //пин динамика 
#define TIME 3000 //время в МС
//**************ДЛЯ РАЗРАБОТЧИКОВ*****************
NewPing sonar1(PIN_C4, PIN_C4, MAX_DISTANCE); //инициалиизация датчика отвечающий за ноту До
NewPing sonar2(PIN_D4, PIND4, MAX_DISTANCE);  //инициалиизация датчика отвечающий за ноту Ре
NewPing sonar3(PIN_E4, PIN_E4, MAX_DISTANCE); //инициалиизация датчика отвечающий за ноту Ми
NewPing sonar4(PIN_F4, PIN_F4, MAX_DISTANCE); //инициалиизация датчика отвечающий за ноту Фа
NewPing sonar5(PIN_G4, PIN_G4, MAX_DISTANCE); //инициалиизация датчика отвечающий за ноту Соль
NewPing sonar6(PIN_A4, PIN_A4, MAX_DISTANCE); //инициалиизация датчика отвечающий за ноту Ля
NewPing sonar7(PIN_B4, PIN_B4, MAX_DISTANCE); //инициалиизация датчика отвечающий за ноту Си
NewPing sonar8(PIN_C5, PIN_C5, MAX_DISTANCE); //инициалиизация датчика отвечающий за ноту До(второй актвы)
byte MELODY[8]={261,293,329,349,392,440,494,523};//массив мелодий 

void setup() {
  Serial.begin(9600); 
 pinMode(BUZZ,OUTPUT);
 }

void loop() {
  NOTE_C4();
   delay(30);
  NOTE_D4();
   delay(30);
  NOTE_E4();
   delay(30);
  NOTE_F4();
   delay(30);
  NOTE_G4();
   delay(30);
  NOTE_A4();
   delay(30);
  NOTE_B4();
   delay(30);
  NOTE_C5();
  
}
//*****************ФУНКЦИИ**********************
void NOTE_C4(){
     delay(50);
    unsigned int uS1 = sonar1.ping(); 
 if(uS1 / US_ROUNDTRIP_CM > 25 && uS1 / US_ROUNDTRIP_CM  < 90) {
  tone(BUZZ,MELODY[0],TIME);
 } 
 else
 {
  noTone(BUZZ);
 }
}

void NOTE_D4(){
    delay(50);
   unsigned int uS2 = sonar2.ping();
 if(uS2 / US_ROUNDTRIP_CM > 25 && uS2 / US_ROUNDTRIP_CM  < 90) {
  tone(BUZZ,MELODY[1],TIME);
 } 
 else
 {
  noTone(BUZZ);
  }
}

 void NOTE_E4(){
    delay(50);
   unsigned int uS3 = sonar3.ping();
 if(uS3 / US_ROUNDTRIP_CM > 25 && uS3 / US_ROUNDTRIP_CM  < 90) {
  tone(BUZZ,MELODY[2],TIME);
 } 
 else
 {
  noTone(BUZZ);
  }
}

void NOTE_F4(){
     delay(50);
  unsigned int uS4 = sonar4.ping();
 if(uS4 / US_ROUNDTRIP_CM > 25 && uS4 / US_ROUNDTRIP_CM  < 90){
    tone(BUZZ,MELODY[3],TIME);
  }
  else{
    noTone(BUZZ);
  }
}

void NOTE_G4(){
    delay(50);
   unsigned int uS5 = sonar5.ping();
 if(uS5 / US_ROUNDTRIP_CM > 25 && uS5 / US_ROUNDTRIP_CM  < 90) {
  tone(BUZZ,MELODY[4],TIME);
 } 
 else
 {
  noTone(BUZZ);
  }
}

void NOTE_A4(){
    delay(50);
   unsigned int uS6 = sonar6.ping();
 if(uS6 / US_ROUNDTRIP_CM > 25 && uS6 / US_ROUNDTRIP_CM  < 90) {
  tone(BUZZ,MELODY[5],TIME);
 } 
 else
 {
  noTone(BUZZ);
  }
} 

 void NOTE_B4(){
    delay(50);
   unsigned int uS7 = sonar7.ping();
 if(uS7 / US_ROUNDTRIP_CM > 25 && uS7 / US_ROUNDTRIP_CM  < 90) {
  tone(BUZZ,MELODY[6],TIME);
 } 
 else
 {
  noTone(BUZZ);
  }
}

 void NOTE_C5(){
    delay(50);
   unsigned int uS2 = sonar2.ping();
 if(uS2 / US_ROUNDTRIP_CM > 25 && uS2 / US_ROUNDTRIP_CM  < 90) {
  tone(BUZZ,MELODY[7],TIME);
 } 
 else
 {
  noTone(BUZZ);
  }
}
