g++ src/server.cpp gen-cpp/message_types.cpp gen-cpp/message_constants.cpp  gen-cpp/MessageService.cpp -std=c++11 -o output/server -I./gen-cpp -lthrift
g++ src/client.cpp gen-cpp/message_types.cpp gen-cpp/message_constants.cpp  gen-cpp/MessageService.cpp -std=c++11 -o output/client -I./gen-cpp -lthrift
