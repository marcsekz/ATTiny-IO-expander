/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 1.0.1
*/

/*
� [2022] Microchip Technology Inc. and its subsidiaries.

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

#include "../pins.h"

static void (*PA1_InterruptHandler)(void);
static void (*PA2_InterruptHandler)(void);
static void (*PA3_InterruptHandler)(void);
static void (*PA4_InterruptHandler)(void);
static void (*PA6_InterruptHandler)(void);
static void (*PA7_InterruptHandler)(void);
static void (*PB4_InterruptHandler)(void);
static void (*PB5_InterruptHandler)(void);
static void (*PB0_InterruptHandler)(void);
static void (*PB1_InterruptHandler)(void);
static void (*PB3_InterruptHandler)(void);
static void (*PB2_InterruptHandler)(void);

void PIN_MANAGER_Initialize()
{
  /* DIR Registers Initialization */
    PORTA.DIR = 0x0;
    PORTB.DIR = 0x7;
    PORTC.DIR = 0x0;

  /* OUT Registers Initialization */
    PORTA.OUT = 0x0;
    PORTB.OUT = 0x0;
    PORTC.OUT = 0x0;

  /* PINxCTRL registers Initialization */
    PORTA.PIN0CTRL = 0x0;
    PORTA.PIN1CTRL = 0x0;
    PORTA.PIN2CTRL = 0x0;
    PORTA.PIN3CTRL = 0x0;
    PORTA.PIN4CTRL = 0x0;
    PORTA.PIN5CTRL = 0x0;
    PORTA.PIN6CTRL = 0x0;
    PORTA.PIN7CTRL = 0x0;
    PORTB.PIN0CTRL = 0x0;
    PORTB.PIN1CTRL = 0x0;
    PORTB.PIN2CTRL = 0x0;
    PORTB.PIN3CTRL = 0x0;
    PORTB.PIN4CTRL = 0x0;
    PORTB.PIN5CTRL = 0x0;
    PORTB.PIN6CTRL = 0x0;
    PORTB.PIN7CTRL = 0x0;
    PORTC.PIN0CTRL = 0x0;
    PORTC.PIN1CTRL = 0x0;
    PORTC.PIN2CTRL = 0x0;
    PORTC.PIN3CTRL = 0x0;
    PORTC.PIN4CTRL = 0x0;
    PORTC.PIN5CTRL = 0x0;
    PORTC.PIN6CTRL = 0x0;
    PORTC.PIN7CTRL = 0x0;

  /* PORTMUX Initialization */
    PORTMUX.CCLROUTEA = 0x0;
    PORTMUX.EVSYSROUTEA = 0x0;
    PORTMUX.SPIROUTEA = 0x0;
    PORTMUX.TCAROUTEA = 0x0;
    PORTMUX.TCBROUTEA = 0x0;
    PORTMUX.USARTROUTEA = 0x0;

  // register default ISC callback functions at runtime; use these methods to register a custom function
    PA1_SetInterruptHandler(PA1_DefaultInterruptHandler);
    PA2_SetInterruptHandler(PA2_DefaultInterruptHandler);
    PA3_SetInterruptHandler(PA3_DefaultInterruptHandler);
    PA4_SetInterruptHandler(PA4_DefaultInterruptHandler);
    PA6_SetInterruptHandler(PA6_DefaultInterruptHandler);
    PA7_SetInterruptHandler(PA7_DefaultInterruptHandler);
    PB4_SetInterruptHandler(PB4_DefaultInterruptHandler);
    PB5_SetInterruptHandler(PB5_DefaultInterruptHandler);
    PB0_SetInterruptHandler(PB0_DefaultInterruptHandler);
    PB1_SetInterruptHandler(PB1_DefaultInterruptHandler);
    PB3_SetInterruptHandler(PB3_DefaultInterruptHandler);
    PB2_SetInterruptHandler(PB2_DefaultInterruptHandler);
}

/**
  Allows selecting an interrupt handler for PA1 at application runtime
*/
void PA1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA1_InterruptHandler = interruptHandler;
}

void PA1_DefaultInterruptHandler(void)
{
    // add your PA1 interrupt custom code
    // or set custom function using PA1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA2 at application runtime
*/
void PA2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA2_InterruptHandler = interruptHandler;
}

void PA2_DefaultInterruptHandler(void)
{
    // add your PA2 interrupt custom code
    // or set custom function using PA2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA3 at application runtime
*/
void PA3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA3_InterruptHandler = interruptHandler;
}

void PA3_DefaultInterruptHandler(void)
{
    // add your PA3 interrupt custom code
    // or set custom function using PA3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA4 at application runtime
*/
void PA4_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA4_InterruptHandler = interruptHandler;
}

void PA4_DefaultInterruptHandler(void)
{
    // add your PA4 interrupt custom code
    // or set custom function using PA4_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA6 at application runtime
*/
void PA6_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA6_InterruptHandler = interruptHandler;
}

void PA6_DefaultInterruptHandler(void)
{
    // add your PA6 interrupt custom code
    // or set custom function using PA6_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA7 at application runtime
*/
void PA7_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA7_InterruptHandler = interruptHandler;
}

void PA7_DefaultInterruptHandler(void)
{
    // add your PA7 interrupt custom code
    // or set custom function using PA7_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB4 at application runtime
*/
void PB4_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB4_InterruptHandler = interruptHandler;
}

void PB4_DefaultInterruptHandler(void)
{
    // add your PB4 interrupt custom code
    // or set custom function using PB4_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB5 at application runtime
*/
void PB5_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB5_InterruptHandler = interruptHandler;
}

void PB5_DefaultInterruptHandler(void)
{
    // add your PB5 interrupt custom code
    // or set custom function using PB5_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB0 at application runtime
*/
void PB0_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB0_InterruptHandler = interruptHandler;
}

void PB0_DefaultInterruptHandler(void)
{
    // add your PB0 interrupt custom code
    // or set custom function using PB0_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB1 at application runtime
*/
void PB1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB1_InterruptHandler = interruptHandler;
}

void PB1_DefaultInterruptHandler(void)
{
    // add your PB1 interrupt custom code
    // or set custom function using PB1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB3 at application runtime
*/
void PB3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB3_InterruptHandler = interruptHandler;
}

void PB3_DefaultInterruptHandler(void)
{
    // add your PB3 interrupt custom code
    // or set custom function using PB3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB2 at application runtime
*/
void PB2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB2_InterruptHandler = interruptHandler;
}

void PB2_DefaultInterruptHandler(void)
{
    // add your PB2 interrupt custom code
    // or set custom function using PB2_SetInterruptHandler()
}
ISR(PORTA_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTA.INTFLAGS & PORT_INT1_bm)
    {
       PA1_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT2_bm)
    {
       PA2_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT3_bm)
    {
       PA3_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT4_bm)
    {
       PA4_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT6_bm)
    {
       PA6_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT7_bm)
    {
       PA7_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTA.INTFLAGS = 0xff;
}

ISR(PORTB_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTB.INTFLAGS & PORT_INT4_bm)
    {
       PB4_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT5_bm)
    {
       PB5_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT0_bm)
    {
       PB0_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT1_bm)
    {
       PB1_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT3_bm)
    {
       PB3_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT2_bm)
    {
       PB2_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTB.INTFLAGS = 0xff;
}

ISR(PORTC_PORT_vect)
{ 
    /* Clear interrupt flags */
    VPORTC.INTFLAGS = 0xff;
}

/**
 End of File
*/