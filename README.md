# ATTiny427 IO expander

# Interface
- I2C
- Address: 0x32+X, where X is set by the address pin
- up to 400 kHz
- Interrupt output

## I2C operation
- Every transaction starts with the byte containing the device address with R/W bit set to 0 (write) (see I2C spec)
- The following byte contains the internal register address (see section Register description)
- After the register address, the transaction may continue in two ways depending on the intention

### Register write
- In write mode the transaction continues with the data byte(s) to be written to the specified register
- If multiple data bytes are sent, operation is dependent on AID bit in CTRL register:
  - If AID is 0, the register address is automatically incremented within the current address space, so the data bytes will be written to consecutive registers. The Address will not increment past the last IO register (AIN7L at 3Fh), nor the last EEPROM address (FFh).
  - If AID is 1, the register address does **not** increment automatically, so consecutive data bytes will overwrite the same register, the content after the transaction is determined by the last data byte

### Register read
- In register read mode the transaction continues with a repeated start condition, followed by a byte containing the device address with the R/W bit set to 1 (read) (see I2C spec)
- The following bytes are transmitted by the peripheral, depending on the state of AID bit in CTRL register:
  - If AID is 0, the register address is automatically incremented within the current address space, so the data bytes will be read from consecutive registers. The Address will not increment past the last IO register (AIN7L at 3Fh), nor the last EEPROM address (FFh).
  - If AID is 1, the register address does **not** increment automatically, so consecutive data bytes will be read from the same register, essentially polling the register contents.

# Register description
See [registers.md](./registers.md).