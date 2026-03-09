git init
git remote add origin https://github.com/YOUR_USERNAME/blood-bag-monitor.git
#define BLYNK_TEMPLATE_ID   "Template ID"
#define BLYNK_TEMPLATE_NAME "Template Name"
#define BLYNK_AUTH_TOKEN    "Auth token"

char ssid[] = "ssid";
char pass[] = "password";
#define ONE_WIRE_BUS   14   // DS18B20 temperature
#define HX711_DT        4   // Load cell data
#define HX711_SCK       5   // Load cell clock
#define TURBIDITY_PIN  35   // Analog turbidity
#define BUZZER_PIN     27
#define LED_PIN        26
