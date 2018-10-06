# PVCC

This project is a subset of a larger monitoring system of air handlers, temperature and humidity sensors, air pressure sensors, and relays for a nursing home.  The five air handler projects all use Cypress PSoC 5LP chips, and are in the same workspace in PSoC Creator.  

The ds18b20, max31855, max31865, and one-wire files are common to all projects in this workspace.  Only the main.c programs along with the hardware design are unique to each monitoring setup.

Parts of these programs came from examples others have provided, and have been modified to run on the Cypress hardware.  There weren't a whole lot of examples for those chips.  They are very easy to program and use, along with being relatively inexpensive to purchase.  PSoC chips were chosen over STM32, LPC and TI chips because of their flexibility for pin assignments and component usage.

Use what you want for anything.  
