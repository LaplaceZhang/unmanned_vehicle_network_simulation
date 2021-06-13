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

#include "MessageListener.h"
#include "Order_m.h"

namespace projeto {

Define_Module(MessageListener);

void MessageListener::initialize()
{
    getParentModule()->subscribe("packetReceived", this);
}

void MessageListener::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details)
{
    Enter_Method_Silent("receiveSignal(%d)", signalID);
    Order *message = new Order("Reverse Order", 0);
    send(message, gate("orderOutput"));
}

} //namespace
