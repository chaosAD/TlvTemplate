#include "Tlv.h"

void yourStateMachineToHandleMcuFlashing(YourStateMachine *sm);

int main(void) {
  YourStateMachine sm = { ...initialization data... };

  // Initialize TLV mechanism and USB/UART/USART device
  tlvInit();

  while(1) {
    yourStateMachineToHandleMcuFlashing(&sm);

    // Calling the function below will handle the sending and reception of
    // TLV packets
    tlvRunService();
  }
}

void yourStateMachineToHandleMcuFlashing(YourStateMachine *sm) {
  // ...this function will send TLV packet by calling tlvSendPacket()

  // ...and also receive TLV packet by calling tlvGetPacket()
}