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
    char buffer[512];
    server_fd=socket(AF_INET, SOCK_STREAM,0);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(9000);
    bind(server_fd,(struct sockaddr*)&address, sizeof(address));
    listen(server_fd,3);
    printf("Server started worker listening on the 9000 \n");

}
