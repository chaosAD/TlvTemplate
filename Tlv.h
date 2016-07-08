#ifndef TLV_H_
#define TLV_H_

typedef struct TlvPacket TlvPacket;
struct TlvPacket {
  uint8_t type;
  uint8_t length;
  int8_t  data[0];
};

/**
 * Initiate the sending of TLV packet. This function is non-blocking, which
 * means it returns to the caller immediately after queueing the packet to
 * tlvHandlePacketSending() for sending.
 */
void tlvSendPacket(TlvPacket *tlvPacket);

/**
 * Try to retrieve an incoming TLV packet. If none available, NULL is
 * returned. This function is non-blocking.
 */
TlvPacket *tlvGetPacket(void);

/**
 * Initialize TLV module
 */
void tlvInit(void);

/**
 * Service the TLV processes
 */
void tlvRunService(void);

#end if   // TLV_H_