#ifndef COMMUNICATION_GROUP_SERVER_H
#define COMMUNICATION_GROUP_SERVER_H

/** =========================================================================*\
  @file CommunicationGroupServer.h
  @date 24.01.2023
  @authors Przemyslaw Kurzak

  @brief CommunicationGroupServer class initialization
  @details SWS Req: [SWS_SM_91020]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include <string>

struct Response_t{
    uint32_t clientID;
    std::string responseMsg;
};

struct Response_t response {1, "sample"};

namespace ara
{
    namespace com
    {
        template<class T>
        class CommunicationGroupServer
        {
            public:
                CommunicationGroupServer();

                /**
                 * @brief Broadcast
                 * @details This method shall take as input parameter the 
                 * message to be broadcasted. In case the boardcast method
                 * fails the method return shall provide an error code as 
                 * specified in [SWS_CM_99024].
                */
                void Broadcast(std::string msg);

                /**
                 * @brief ListClients
                 * @details This method shall have no input parameters and
                 * shall return the list of clients. In case the listClients 
                 * method fails the method return shall provide an error 
                 * code as specified in [SWS_CM_99024].
                */
                void ListClients(void);

                /**
                 * @brief Message
                 * @details This method shall take as input parameters the 
                 * message to be sent, and the clientID of the client which 
                 * shall be addressed. In case the message method fails the
                 * method return shall provide an error code as specified 
                 * in [SWS_CM_99024].
                */
                void Message(void);

                /**
                 * @brief Response
                 * @details The event shall provide the response message 
                 * and the clientID of this response.
                */
                Response_t Response(void);

                void SetResponse_t(Response_t setResponse);
        };
    }
}

#endif /* COMMUNICATION_GROUP_SERVER_H */