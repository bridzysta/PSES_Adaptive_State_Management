#ifndef COMMUNICATION_GROUP_SERVER_H
#define COMMUNICATION_GROUP_SERVER_H

/** =========================================================================*\
  @file CommunicationGroupServer.hpp
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
                void broadcast(void);
                void listClients(void);
                void message(void);
                void response(void);
        };
    }
}

#endif /* COMMUNICATION_GROUP_SERVER_H */