#ifndef COMM_H_
#define COMM_H_

#include <stdint.h>

/**
 * Initialize communication device like USB, UART, Ethernet, etc...
 */
void commInit(void);

/**
 * This is hardware implementation of your byte sending function.
 * The communication device can be USB, UART, Ethernet, etc...
 */
void commSendByte(int8_t byteToSend);

/**
 * This is hardware implementation of your byte reception function.
 * The communication device can be USB, UART, Ethernet, etc...
 */
int8_t commGetByte(void);

#endif   // COMM_H_