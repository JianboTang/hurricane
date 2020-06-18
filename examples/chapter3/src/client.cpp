#include "MessageService.h"
//#include <boost/shared_ptr.hpp>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <iostream>
using namespace std;
using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
//using boost::shared_ptr;

int main(int argc, char **argv){
    std::shared_ptr<TTransport> socket(new TSocket("localhost", 9090));
    std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    transport->open();
    MessageServiceClient client(protocol);
    Message message;
    client.lastestMessage(message);
    std::cout << message.id << std::endl;
    std::cout << message.content << std::endl;
    transport->close();
    return 0;
}
