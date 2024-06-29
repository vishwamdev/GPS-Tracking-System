#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

// Pin connections
#define RST_PIN 3
#define CE_PIN 4
#define DC_PIN 5
#define DIN_PIN 6
#define CLK_PIN 7

// Create display object
Adafruit_PCD8544 display = Adafruit_PCD8544(CLK_PIN, DIN_PIN, DC_PIN, CE_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);
  Serial.println("Initializing display...");

  // Initialize display
  display.begin();
  display.setContrast(50);
  display.clearDisplay();

  Serial.println("Display initialized");

  // Display a simple message
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.setCursor(0, 0);
  display.println("Hello, world!");
  display.display();  // Show on the display

  Serial.println("Message displayed");
}

void loop() {
  // Do nothing
}


/*void setup() {
  // Initialize display
  display.begin();
  // Set contrast
  display.setContrast(50);
  // Clear display buffer
  display.clearDisplay();

  // Display a message
  display.setTextSize(1);
  display.setTextColor(BLACK);
  display.setCursor(0, 0);
  display.println("Hello, world!");
  display.display();  // Show on the display
}

void loop() {
  // Do nothing
}*/
