import socket

LISTENER_PORT = 25565
# change to a specific IP address to listen only on specific interfaces
LISTENER_HOST = "0.0.0.0" 
BACKLOG = 5

# This file implements a daemon that listens to a specific port and parses bomb messages.
# All parsed messages are written to an output file "messages.log".

def start_listener():
    # Create a socket object
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Bind the socket to a specific address and port
    server_socket.bind((LISTENER_HOST, LISTENER_PORT))

    # Listen for incoming connections (maximum 5 pending connections)
    server_socket.listen(5)

    print(f"Listening on {LISTENER_HOST}:{LISTENER_PORT}")

    while True:
        # Accept a connection from a client
        client_socket, client_address = server_socket.accept()

        print(f"Connection from {client_address}")

        # Receive data from the client
        data = client_socket.recv(1024)
        if not data:
            break
        print(f"Received: {data.decode()}")

        # Send a response to the client
        client_socket.send("Hello from server".encode())

        # Close the client socket
        client_socket.close()

with socket.create_server((LISTENER_HOST, LISTENER_PORT), backlog=BACKLOG) as server:
    while True:
        connection, addr = server.accept()
        print(f"Connection from {addr}")
        

        
