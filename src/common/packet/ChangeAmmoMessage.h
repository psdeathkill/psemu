#pragma once

#include "opcodes.h"
#include "common/bitstream.h"

class ChangeAmmoMessage {
public:
    uint16_t guid;
    uint32_t unk1;

     static ChangeAmmoMessage decode(BitStream& bitStream) {
        ChangeAmmoMessage packet;
        bitStream.read(&packet.guid);
        bitStream.read(&packet.unk1);
        return packet;
    }
};