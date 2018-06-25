/*
 * This is server, we open 7777 port and communicate with the client
 * https://blog.csdn.net/u010087712/article/details/48448253
 */
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <cstring>
#include <iostream>

#define SERVER_PORT 7777

int main()
{
    int server_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (server_sock == -1)
    {
        std::cout << "create server socket failed" << std::endl;
        return -1;
    }
    struct sockaddr_in server_addr;
    memset(&server_addr, 0, sizeof(struct sockaddr_in));
    server_addr.sin_family = AF_INET;
    //server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    if (inet_aton("192.168.56.26", &(server_addr.sin_addr)) == 0)
    {
        std::cout << "inet_aton failed" << std::endl;
	return -1;
    }
    server_addr.sin_port = htons(SERVER_PORT);

    // bind the socket
    if (bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0)
    {
        std::cout << "server bind socket failed" << std::endl;
	return -1;
    }

    if (listen(server_sock, SOMAXCONN) != 0)
    {
        std::cout << "server listen port: " << SERVER_PORT << " failed" << std::endl;
	return -1;
    }

    struct sockaddr_in client_addr;
    socklen_t client_addr_len = 0;
    int client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &client_addr_len);
    if (client_sock < 0)
    {
        std::cout << "server accept client connection failed" << std::endl;
	return -1;
    }

    return 0;
} 
