#include <cstdio>   //Exist because some code need
                    //"cstdio" library for call a fuction.
                    //check documentation.

#include <iostream>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <netdb.h>

int main (int argc, char *argv[]) {
    int sock;                       //Declaring the class such sock,
                                    //server, and server_reply.
    struct sockaddr_in server;
    char server_reply[5000];

    struct hostent *host;

        //Creating socket.
        /*
            The fuction of making the socket is to having a
            connector/pipeline to connecting to server
            such morningstar or Yahoo Finance or CNBC.

            With having a socket, you actually can connecting to
            any kind connection as long as you calling "ARPA",
            "Netinet", "Socket", and "Netdb" library.

            Check on documentation.
        */

        sock = socket(AF_INET, SOCK_STREAM, 0);

        if (sock == -1) {
            std::cout << "Couldn't creating socket" << std::endl;
        }

        /*
        If socket is doesn't exist or cannot be created then
        it would show us an error.
        */

        //Calling url with declare host.
        puts("Socket created");
        host = gethostbyname("morningstar.com");

        // Making a connection with called url.
        server.sin_addr.s_addr = *((unsigned long*) host->h_addr_list);
        server.sin_family = AF_INET;
        server.sin_port = htons(80);
}

