#ifndef COMMUNICATION_GROUP_SERVER_H
#define COMMUNICATION_GROUP_SERVER_H

/** =========================================================================*\
  @file CommunicationGroupServer.h
  @date 24.01.2023
  @authors Przemyslaw Kurzak

  @brief CommunicationGroupServer class initialization
  
  More details.

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

namespace ara
{
    namespace com
    {
        class CommunicationGroupServer
        {
            public:
                void Broadcast(void);
                void ListClients(void);
                void Message(void);
                void Response(void);
        };
    }
}

#endif /* COMMUNICATION_GROUP_SERVER_H */