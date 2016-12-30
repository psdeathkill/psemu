#pragma once

#include "opcodes.h"
#include "common/bitstream.h"

class GenericObjectStateMsg {
public:
    uint16_t guid;
    uint32_t state;

     static GenericObjectStateMsg decode(BitStream& bitStream) {
        GenericObjectStateMsg packet;
        bitStream.read(&packet.guid);
        bitStream.read(&packet.state);
        return packet;
    }

    void encode(BitStream& bitStream) {
        uint8_t opcode = OP_GenericObjectStateMsg;
        bitStream.write($opcode);
        bitStream.write(&guid);
        bitStream.write(&state);
    }
};