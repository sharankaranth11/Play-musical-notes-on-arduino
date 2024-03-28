#include "pitches.h"
#include "themes.h"

const int speakerPin = 8;  // Connect the larger speaker to this pin
const int speakerPin1 = 9;

void Play_Pirates() {
  for (int thisNote = 0; thisNote < (sizeof(Pirates_note) / sizeof(int)); thisNote++) {
    int noteDuration = 1000 / Pirates_duration[thisNote];
    tone(speakerPin, Pirates_note[thisNote], noteDuration);
    tone(speakerPin1, Pirates_note[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.05;
    delay(pauseBetweenNotes);
    //noTone(speakerPin);
    noTone(speakerPin1);
  }
}

void Play_CrazyFrog() {
  for (int thisNote = 0; thisNote < (sizeof(CrazyFrog_note) / sizeof(int)); thisNote++) {
    int noteDuration = 1000 / CrazyFrog_duration[thisNote];
    tone(speakerPin, CrazyFrog_note[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(speakerPin);
  }
}

void Play_MarioUW() {
  for (int thisNote = 0; thisNote < (sizeof(MarioUW_note) / sizeof(int)); thisNote++) {
    int noteDuration = 1000 / MarioUW_duration[thisNote];
    tone(speakerPin, MarioUW_note[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.90;
    delay(pauseBetweenNotes);
    noTone(speakerPin);
  }
}

void Play_Titanic() {
  for (int thisNote = 0; thisNote < (sizeof(Titanic_note) / sizeof(int)); thisNote++) {
    int noteDuration = 1000 / Titanic_duration[thisNote];
    tone(speakerPin, Titanic_note[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.00;
    delay(pauseBetweenNotes);
    noTone(speakerPin);
  }
}

void Play_WednesdayAdams() {
  for (int thisNote = 0; thisNote < (sizeof(BloodyMary_note) / sizeof(int)); thisNote++) {
    int noteDuration = 1000 / BloodyMary_duration[thisNote];
    tone(speakerPin, BloodyMary_note[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.70;
    delay(pauseBetweenNotes);
    noTone(speakerPin); 
  }
}

// Define the melody and duration for "Twinkle, Twinkle, Little Star"



void Play_Twinkle() {
  for (int thisNote = 0; thisNote < (sizeof(Twinkle_note) / sizeof(int)); thisNote++) {
    int noteDuration = 800 / Twinkle_duration[thisNote];  // Adjust the multiplier for higher sound
    tone(speakerPin, Twinkle_note[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.5;
    delay(pauseBetweenNotes);
    noTone(speakerPin);
  }
}

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(speakerPin, OUTPUT);  // Set the speaker pin as an OUTPUT
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2) == 0) {
    Serial.println("Selected -> 'He is a Pirate' ");
    Play_Pirates();
  }
  if (digitalRead(3) == 0) {
    Serial.println("Selected -> 'Crazy Frog' ");
    Play_CrazyFrog();
  }
  if (digitalRead(4) == 0) {
    Serial.println("Selected -> 'Mario UnderWorld' ");
    Play_MarioUW();
  }
  if (digitalRead(5) == 0) {
    Serial.println("Selected -> 'jingle bells' ");
    Play_Titanic();
  }
  if (digitalRead(6) == 0) {
    Serial.println("Selected -> 'Happy Birthday' ");
    Play_Twinkle();
  }
}
