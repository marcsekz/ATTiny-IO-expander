/**
 * 
 * @file nvm.h
 *
 * @defgroup nvm_driver  Non Volatile Memory
 *
 * @brief This file contains API prototypes and other datatypes for NVM driver.
 *
 * @version NVM Driver Version 2.0.0
 */

/*
© [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef NVM_H
#define NVM_H

#include "../system/utils/compiler.h"

/**
 * @ingroup nvm_driver
 * @brief Datatypes for NVM address and data.
 */
typedef uint8_t eeprom_data_t;
typedef uint16_t eeprom_address_t;

/**
 * @ingroup nvm_driver
 * @enum nvm_status_t
 * @brief This enumeration contains status codes for NVM driver APIs.
 */
typedef enum
{
    NVM_OK, /**<0 - NVM operation is successful*/
    NVM_ERROR /**<1 - NVM operation is failed*/
} nvm_status_t;

/**
 * @ingroup nvm_driver
 * @brief This API initializes the Flash driver.
 *        This API must be called before any other Flash APIs.
 * @param none
 * @return none
 */
void NVM_Initialize(void);

/**
 * @ingroup nvm_driver
 * @brief This API returns the status of last NVM operation.
 * @param none
 * @retval NVM_OK if NVM operation is successful
 * @retval NVM_ERROR if NVM operation is failed
 */
nvm_status_t NVM_StatusGet(void);

/**
 * @ingroup nvm_driver
 * @brief This API reads one byte from given EEPROM address.
 * @param [in] address - Address of EEPROM location to be read
 * @return Byte read from given EEPROM address
 */
eeprom_data_t EEPROM_Read(eeprom_address_t address);

/**
 * @ingroup nvm_driver
 * @brief This API writes one byte to given EEPROM address.
 * @param [in] address - Address of EEPROM location to be written
 * @param [in] data - Byte to be written to given EEPROM location
 * @return none
 */
void EEPROM_Write(eeprom_address_t address, eeprom_data_t data);

/**
 * @ingroup nvm_driver
 * @brief This API checks if EEPROM is busy.
 * @param none
 * @retval true if EEPROM is busy
 * @retval false if EEPROM is free
 */
bool EEPROM_IsBusy(void);

#endif //NVM_H