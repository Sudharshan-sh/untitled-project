#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 9000;

int main (){
    int server_fd, client_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[512];
    server_fd=socket(AF_INET, SOCK_STREAM,0);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(9000);
    bind(server_fd,(struct sockaddr*)&address, sizeof(address));
    listen(server_fd,3);
    printf("Server started worker listening on the 9000 \n");
    client_socket = accept(server_fd,
                       (struct sockaddr*)&address,
                       (socklen_t*)&addrlen);
    recv(client_socket, buffer, sizeof(buffer), 0);

    printf("Received: %s\n", buffer);
    send(client_socket, "Task done", 9, 0);                   

}
