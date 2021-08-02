//
// Generated file, do not edit! Created by nedtool 5.6 from applications/mamapp/BMeshPacket.msg.
//

#ifndef __INET_BMESHPACKET_M_H
#define __INET_BMESHPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

class BMeshPacket;
} // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/linklayer/common/MacAddress_m.h" // import inet.linklayer.common.MacAddress


namespace inet {

/**
 * Class generated from <tt>applications/mamapp/BMeshPacket.msg:12</tt> by nedtool.
 * <pre>
 * //
 * // Packet for ~AckingMac. Packet size is configurable
 * // in the MAC layer. 
 * //
 * class BMeshPacket extends FieldsChunk
 * {
 *     // Bluetooth Mesh network: up to 32,767 nodes with a maximum of 126 hops
 *     // From the Bluetooth Mesh specification:
 *     // The TTL field is a 7-bit field. The following values are defined:
 *     // 	• 0 = has not been relayed and will not be relayed
 *     // 	• 1 = may have been relayed, but will not be relayed
 *     // 	• 2 to 126 = may have been relayed and can be relayed
 *     // 	• 127 = has not been relayed and can be relayed
 *     int ttl;
 * 
 *     // 11 Bytes Chunk?
 *     chunkLength = B(11);
 *     int hops = 127;		// number of times the message was relayed
 * 
 * 	// Internal (simulation use)    
 *     string srcUuid;     // source uuid (where the data was originally generated, the sensor node)
 *     string packetUuid;  // random uuid per data packet
 *     int sequence = -1;  // "id" of the generated data (src + sequence should be unique in the simulation)
 *     simtime_t creationTime;
 * }
 * </pre>
 */
class BMeshPacket : public ::inet::FieldsChunk
{
  protected:
    int ttl = 0;
    int hops = 127;
    omnetpp::opp_string srcUuid;
    omnetpp::opp_string packetUuid;
    int sequence = -1;
    omnetpp::simtime_t creationTime = SIMTIME_ZERO;

  private:
    void copy(const BMeshPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BMeshPacket&);

  public:
    BMeshPacket();
    BMeshPacket(const BMeshPacket& other);
    virtual ~BMeshPacket();
    BMeshPacket& operator=(const BMeshPacket& other);
    virtual BMeshPacket *dup() const override {return new BMeshPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getTtl() const;
    virtual void setTtl(int ttl);
    virtual int getHops() const;
    virtual void setHops(int hops);
    virtual const char * getSrcUuid() const;
    virtual void setSrcUuid(const char * srcUuid);
    virtual const char * getPacketUuid() const;
    virtual void setPacketUuid(const char * packetUuid);
    virtual int getSequence() const;
    virtual void setSequence(int sequence);
    virtual omnetpp::simtime_t getCreationTime() const;
    virtual void setCreationTime(omnetpp::simtime_t creationTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const BMeshPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, BMeshPacket& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_BMESHPACKET_M_H

