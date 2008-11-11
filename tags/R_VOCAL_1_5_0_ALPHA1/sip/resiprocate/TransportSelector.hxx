#if !defined(TRANSPORTSELECTOR_HXX)
#define TRANSPORTSELECTOR_HXX

#include <sipstack/Data.hxx>
#include <sipstack/SipMessage.hxx>
#include <sipstack/Fifo.hxx>

namespace Vocal2
{

class SipMessage;
class UdpTransport;
class SipStack;

class TransportSelector
{
   public:
      TransportSelector(SipStack& stack);
      void process();

      void send( SipMessage* msg );

      // I don't think we really need this at this level, handled one level
      // up.
      //   void send(SipMessage* msg, const Data& dest="default" );

   private:

      // this eventually will have to allow for construction and management
      // of n of these guys
      SipStack& mStack;
      UdpTransport* mUdp;
};

}

#endif