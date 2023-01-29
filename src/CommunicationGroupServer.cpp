/** =========================================================================*\
  @file CommunicationGroupServer.cpp
  @date 24.01.2023
  @authors Przemyslaw Kurzak

  @brief CommunicationGroupServer class definition
  @details SWS Req: [SWS_SM_91020]

  @copyright AGH University of Science and Technology  
\*===========================================================================*/

#include "CommunicationGroupServer.h"

template <class T>
void ara::com::CommunicationGroupServer<T>::Broadcast(std::string msg)
{

}

template <class T>
void ara::com::CommunicationGroupServer<T>::ListClients()
{

}

template <class T>
void ara::com::CommunicationGroupServer<T>::Message()
{

}

template <class T> 
Response_t ara::com::CommunicationGroupServer<T>::Response(void)
{
  return response;
}

void SetResponse_t(Response_t setResponse)
{
  response = setResponse;
}
