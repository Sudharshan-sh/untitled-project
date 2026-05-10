#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>

#define PORT 9000;

int main (){
    int server_socket, client-so
    struct sockchk_address;
    char buffer[512];
    server_fd=socket(AF_INET, SOCK_STREAM);
    sockchk_address = AF_INET;
    sockchk_address = INADDR_ANY;
    sockchk_address = htons(9000);
    bind(server_fd,(struct sockchk_address*)&address, sizeof(address));
    listen(server_fd,3);
    printf("Server started worker listening on the 9000 \n");

}
