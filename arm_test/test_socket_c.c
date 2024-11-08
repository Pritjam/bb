#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#define SERVER_IP "127.0.0.1"            // Change this to the server's IP address if needed
#define SERVER_PORT 25564 // Change this to the server's port if needed

typedef struct results {
    int id;
    bool exploded;

} results_t;

int main() {
  int sock_fd;
  struct sockaddr_in server_addr;
  char *message = "Hello World!";

  // Create socket
  sock_fd = socket(AF_INET, SOCK_STREAM, 0);
  if (sock_fd < 0) {
    perror("Socket creation failed");
    exit(EXIT_FAILURE);
  }

  // Set up the server address structure
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(SERVER_PORT);

  // Convert IP address from text to binary form
  if (inet_pton(AF_INET, SERVER_IP, &server_addr.sin_addr) <= 0) {
    perror("Invalid address or address not supported");
    close(sock_fd);
    exit(EXIT_FAILURE);
  }

  // Connect to the server
  if (connect(sock_fd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
    perror("Connection failed");
    close(sock_fd);
    exit(EXIT_FAILURE);
  }

  // Send the message
  if (send(sock_fd, message, strlen(message), 0) < 0) {
    perror("Send failed");
    close(sock_fd);
    exit(EXIT_FAILURE);
  }

  printf("Message sent: %s\n", message);

  // Close the socket
  close(sock_fd);
  return 0;
}
