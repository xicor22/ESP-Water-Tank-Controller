# ESP-Water-Tank-Controller 

An ESP8266-based water tank monitoring and control system using ESPHome and Home Assistant. This project monitors water levels and controls relays to manage the water pump.

## Features
* Monitors water levels at 5 different points.
* Controls water pump based on water levels.
* Measures water temperature using DS18B20 sensor.
## Hardware Requirements
* ESP8266 (D1 Mini)
* DS18B20 Temperature Sensor
* Relays

## Schematic
![Schematic](https://github.com/xicor22/ESP-Water-Tank-Controller/blob/main/schematic.png?raw=true)

## Wiring Diagram
![Schematic](https://github.com/xicor22/ESP-Water-Tank-Controller/blob/main/Wiring_schematic.jpg?raw=true)

**Note:** I'm using transistor because of the water's high resistance, in my case, 2-3 Mega Ohm.

## Physical Circuit
![Circuit](https://github.com/xicor22/ESP-Water-Tank-Controller/blob/main/Circuit_physical.jpg?raw=true)

### 8 pin connection
* Black - Level 1
* Brown - Level 2
* Red -Level 3
* Orange - Level 4
* White - Temp Sensor
* Green - 5v
* Blue - 3.3v
* Purple - Ground
