//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef COMMUNICATION_PROTOCOLS_GROUND_SIMPLEDRONEPROTOCOL_H_
#define COMMUNICATION_PROTOCOLS_GROUND_SIMPLEDRONEPROTOCOL_H_

#include <omnetpp.h>
#include "../base/CommunicationProtocolBase.h"
#include "../../messages/network/SimpleMessage_m.h"

namespace projeto {

class SimpleGroundProtocol: public CommunicationProtocolBase {
    protected:
        int content = 0;
    protected:
        virtual void initialize(int stage) override;
        virtual void handlePacket(Packet *pk) override;
};

} /* namespace projeto */

#endif /* COMMUNICATION_PROTOCOLS_GROUND_SIMPLEDRONEPROTOCOL_H_ */
