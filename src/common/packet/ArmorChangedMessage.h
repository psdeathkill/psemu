#pragma once

#include "opcodes.h"
#include "common/bitstream.h"

class ArmorChangedMessage {
public:
    uint16_t guid;
    uint8_t armor;
    uint8_t subtype;

     void encode(BitStream& bitStream) {
        ArmorChangedMessage packet;
        bitStream.write(&guid);
        bitStream.writeBits(&armor, 3);
        bitStream.writeBits(&subtype, 3);
    }
};