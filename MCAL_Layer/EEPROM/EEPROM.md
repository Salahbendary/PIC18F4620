# EEPROM Driver for Embedded Systems

This folder contains a simple EEPROM (Electrically Erasable Programmable Read-Only Memory) driver for embedded systems. The driver allows you to easily write and read data to/from an EEPROM memory chip.

## Introduction

EEPROM is a type of non-volatile memory that retains data even when the power is turned off. This driver provides functions to interact with EEPROM memory and perform read and write operations.

## Code Overview 

The provided code includes two main functions:

### Data_EEPROM_WriteByte

This function writes a single data byte to a specific location in the EEPROM memory.

```c
Std_ReturnType Data_EEPROM_WriteByte(uint16 bAdd, uint8 bData);
```

- `bAdd`: The memory address where you want to write the data.
- `bData`: The data byte to be written.

### Data_EEPROM_ReadByte

This function reads a data byte from a specific location in the EEPROM memory.

```c
Std_ReturnType Data_EEPROM_ReadByte(uint16 bAdd, uint8 *bData);
```

- `bAdd`: The memory address from which you want to read the data.
- `bData`: Pointer to store the read data.

## Usage

1. Include the `hal_eeprom.h` header file in your project.
2. Call the `Data_EEPROM_WriteByte` function to write data to the EEPROM.
3. Call the `Data_EEPROM_ReadByte` function to read data from the EEPROM.

## Macros

The driver code uses macros to configure EEPROM operations and settings:

- `ACCESS_FLASH_PROGRAM_MEMORY` or `ACCESS_EEPROM_PROGRAM_MEMORY`: Selects Flash program memory or EEPROM memory access.
- `ALLOW_WRITE_CYCLES_FLASH_EEPROM` or `INHIBTS_WRITE_CYCLES_FLASH_EEPROM`: Enables or inhibits writing cycles to the EEPROM.

These macros enhance control over EEPROM access and operations.

## Learn More

For a detailed explanation of EEPROM and its applications, you can refer to this [EEPROM tutorial](https://www.electronics-notes.com/articles/electronic_components/memories/eeprom-electrically-erasable-programmable-read-only-memory-basics-tutorial.php).

## Example

Here's how you might use the EEPROM driver in your project:

```c
#include "hal_eeprom.h"

int main() {
    uint8 data = 0x55;
    uint8 readData = 0;
    
    Data_EEPROM_WriteByte(0x3FF, data);
    Data_EEPROM_ReadByte(0x3FF, &readData);
    
    // Now readData contains the value 0x55
}
```

## Conclusion

This EEPROM driver simplifies working with EEPROM memory in embedded systems. It's useful for storing and retrieving data that needs to be preserved even when the device is powered off.

Feel free to use this driver in your embedded projects!

Created by: Salah Bendary

