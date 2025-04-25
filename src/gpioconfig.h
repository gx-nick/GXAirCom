#include <cstdint>

struct EInkPins {
  int8_t busy;
  int8_t rst;
  int8_t dc;
  int8_t cs;
  int8_t clk;
  int8_t din;
};

//LED
struct LEDPins {
  int8_t User;
  int8_t Beacon;
};

struct PowerPins {
  int8_t ExtPower; //Power
  int8_t ExtPowerOnOff; //external Power on/off
  int8_t ADCCtrl; //ADC-Voltage
  int8_t ADCVoltage; //ADC-Voltage
};

//LORA-Module
struct LoraPins {
  int8_t Rst;
  int8_t DI0;
  int8_t GPIO;
  int8_t _SS;
  int8_t _MISO;
  int8_t _MOSI;
  int8_t _SCK;
};

//GSM-Module
struct GSMPins {
  int8_t Rst;
  int8_t Power;
  int8_t Tx;
  int8_t Rx;
};

struct GPSPins {
  int8_t Tx;
  int8_t Rx;
  int8_t PPS;
};

struct BaroPins { //Baro-Module
  int8_t SDA;
  int8_t SCL;
};

struct ExtGPSVarioPins { //Vario/GPS
  int8_t Tx;
  int8_t Rx;
  int8_t PPS;
};

//OLED-Display / PMU
struct OLEDPMUPins { 
  int8_t Rst;
  int8_t SDA;
  int8_t SCL;
};

struct AnemometerPins { //Anemometer
  int8_t WindDir;
  int8_t WindSpeed;
  int8_t RainGauge;
};