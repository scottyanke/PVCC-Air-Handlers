#AHU2

##Air Handler monitor using PSoC 5LP

This is code for PSoC Creator using a PSoC 5LP chip to remotely monitor an air handler at PVCC. This is part of a larger system of devices, all talking via RS485 to a Raspberry Pi running a Python monitoring program.

Each monitor has an address that is unique within the building. The address is just two characters, the escape character followed by a single character (usually printable, but doesn't have to be). The monitors respond to the requests by reporting all of the sensors attached to them. Monitors just respond to requests, they don't push data out. They only time a monitor sends something unsolicited is when it is booted.

Most of the monitors have watchdog timers. They aren't really necessary, but are there "just in case" the program locks up on an individual sensor. That's been known to happen with some i2c devices.

This specific monitor is for AHU-2, and consists of the PSoC, an inexpensive chinese-made RS485 module, MAX31855 modules for k-type thermocouples, a MPX5500DP pressure sensor, a MPXV7002 pressure sensor, and multiple DS18B120s. It is also connected to a couple of RIBU1Cs that monitor whether or not air conditioners are running.

The hardware is setup for up to 8 of the MAX31855 modules, where each module is connected to a thermocouple temperature probe. The monitor program only reports the probes it can find, not modules that don't exist or are errored out. The pressure sensors detect whether or not the nearby air compressor is working, and what pressure it is putting out. Air compressors fail for a number of reasons, and they are scattered throughout the building where they are rarely seen. The second pressure sensor is monitoring the AHU to ensure that the blower fan is actually moving air. It's a monitor that can detect broken fan belts, fire alarm systems that have disable air handlers, etc. The RIBU1Cs are connected as straight GPIO inputs. If the line is grounded, then the A/C is running (because the RIB relay shorted it to ground). Otherwise the line floats high. Finally, there is a 1-wire setup that will poll multiple DS18B20s scattered throughout nearby hallways (and outside) to monitor area temperatures.

The weak spot is with the MPXV7002 pressure sensor. Getting it to properly monitor the air pressure in the ductwork has been a major issue. It works on some air handlers, and doesn't work on others.

All of these programs are really being used on a daily basis in a nursing home. A total of five air handlers are being monitored, along with about 18 hallway locations (and the outside temperature). The Python 3 program talking to these monitors uses TkInter to display the status of everything on a 5" HDMI screen connected to the Raspberry Pi (2). SQLite is used to store the data so history can be referred to. The Pi doesn't talk to any ethernet devices (due to corporate IT limitations). All communications is done with RS485 connections to each monitoring board.

Not all monitors are the same. Each air handler is different, due to the nature of the building. Some air handlers use PT-100 probes because of the distance to each monitoring point, while others use K-type thermocouples with MAX31855 boards. All have the ability to use DS18B20 sensors. One AHU does not have anything at all to do with air compressors, and no way has been found yet to monitor air pressure in the ductwork for this AHU that is physically located outside. Monitors for the tunnels to detect steam line breaks are all the same, except for the ID.

Please feel free to use what's here as examples. This whole project uses Cypress PSoC chips, ST Micro STM8S103F3 and STM32F103C8 chips. It was put together as inexpensively as possible.
