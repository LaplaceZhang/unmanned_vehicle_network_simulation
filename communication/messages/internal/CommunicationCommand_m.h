//
// Generated file, do not edit! Created by nedtool 5.6 from communication/messages/internal/CommunicationCommand.msg.
//

#ifndef __PROJETO_COMMUNICATIONCOMMAND_M_H
#define __PROJETO_COMMUNICATIONCOMMAND_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace projeto {

class CommunicationCommand;
} // namespace projeto

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace projeto {

/**
 * Enum generated from <tt>communication/messages/internal/CommunicationCommand.msg:20</tt> by nedtool.
 * <pre>
 * enum CommunicationCommandType
 * {
 *     // Sets the payload that the communication module sends
 *     SET_PAYLOAD = 0;
 *     // Sets the target of the communication message (null means broadcast)
 *     SET_TARGET = 1;
 * }
 * </pre>
 */
enum CommunicationCommandType {
    SET_PAYLOAD = 0,
    SET_TARGET = 1
};

/**
 * Class generated from <tt>communication/messages/internal/CommunicationCommand.msg:28</tt> by nedtool.
 * <pre>
 * // Message declaration for the communication command
 * message CommunicationCommand
 * {
 *     // Command Id
 *     CommunicationCommandType commandType;
 * 
 *     // Template for the SET_PAYLOAD message type (message that the communication module should send)
 *     inet::FieldsChunk *payloadTemplate;
 * 
 *     // Target for the set target command
 *     string target;
 * }
 * </pre>
 */
class CommunicationCommand : public ::omnetpp::cMessage
{
  protected:
    projeto::CommunicationCommandType commandType = static_cast<projeto::CommunicationCommandType>(-1);
    inet::FieldsChunk * payloadTemplate = nullptr;
    omnetpp::opp_string target;

  private:
    void copy(const CommunicationCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CommunicationCommand&);

  public:
    CommunicationCommand(const char *name=nullptr, short kind=0);
    CommunicationCommand(const CommunicationCommand& other);
    virtual ~CommunicationCommand();
    CommunicationCommand& operator=(const CommunicationCommand& other);
    virtual CommunicationCommand *dup() const override {return new CommunicationCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual projeto::CommunicationCommandType getCommandType() const;
    virtual void setCommandType(projeto::CommunicationCommandType commandType);
    virtual const inet::FieldsChunk * getPayloadTemplate() const;
    virtual inet::FieldsChunk * getPayloadTemplateForUpdate() { return const_cast<inet::FieldsChunk *>(const_cast<CommunicationCommand*>(this)->getPayloadTemplate());}
    virtual void setPayloadTemplate(inet::FieldsChunk * payloadTemplate);
    virtual const char * getTarget() const;
    virtual void setTarget(const char * target);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CommunicationCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CommunicationCommand& obj) {obj.parsimUnpack(b);}

} // namespace projeto

#endif // ifndef __PROJETO_COMMUNICATIONCOMMAND_M_H

