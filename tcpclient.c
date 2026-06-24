// Note: I recommend implementing the tcpserver.c first.
//
// Compile with: gcc tcpclient.c -o tcpclient
//
// Implement tcp client below.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 128

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[BUFFER_SIZE] = {0};
    char input[BUFFER_SIZE];

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("socket creation error");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        printf("Invalid address\n");
        return -1;
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection Failed");
        return -1;
    }

    read(sock, buffer, BUFFER_SIZE);
    printf("%s\n", buffer);

    printf("What is your username: ");
    fgets(input, BUFFER_SIZE, stdin);

    while (1) {
        printf("client> ");
        fgets(input, BUFFER_SIZE, stdin);

        if (strncmp(input, "exit", 4) == 0) {
            break;
        }

        memset(buffer, 0, BUFFER_SIZE);
        strncpy(buffer, input, BUFFER_SIZE - 1);
        send(sock, buffer, BUFFER_SIZE, 0);
    }

    close(sock);
    return 0;
}

