#pragma once

#include "opcodes.h"
#include "common/bitstream.h"

class AvatarJumpMessage {
public:
    bool state;

     static AvatarJumpMessage decode(BitStream& bitStream) {
        AvatarJumpMessage packet;
        packet.state = bitStream.readBit();
        return packet;
    }
};