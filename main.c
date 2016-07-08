#include "Tlv.h"

void yourStateMachineToHandleFlashing(YourStateMachine *sm);

int main(void) {
  YourStateMachine sm = { ..initialization data.. }

  // Initialize TLV mecahnism and USB/UART/USART device
  tlvInit();

  while(1) {
    yourStateMachineToHandleFlashing(&sm);

    // Calling the function below will handle the sending and reception of
    // TLV packets
    tlvRunService();
  }
}

void yourStateMachineToHandleFlashing(YourStateMachine *sm) {
  // ...this function will send TLV packet by calling tlvSendPacket()

  // ...and also receive TLV packet by calling tlvReceivePacket()
}