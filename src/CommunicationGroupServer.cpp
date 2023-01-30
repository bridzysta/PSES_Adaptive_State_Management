/**
 * @file CommunicationGroupServer.cpp
 * @date 24.01.2023
 * @authors Przemyslaw Kurzak
 *
 * @brief CommunicationGroupServer class definition
 * @details SWS Req: [SWS_SM_91020]
 *
 * @copyright AGH University of Science and Technology
 */

#include "CommunicationGroupServer.hpp"

namespace ara::com {

    template <class T>
    void CommunicationGroupServer<T>::Broadcast(std::string msg) {
    }

    template <class T>
    void CommunicationGroupServer<T>::ListClients() {
    }

    template <class T>
    void CommunicationGroupServer<T>::Message() {
    }

    template <class T>
    Response_t CommunicationGroupServer<T>::Response(void) {
        return response;
    }

    void SetResponse_t(Response_t setResponse) {
        response = setResponse;
    }

}
