# TCP Client-Server Program

## Overview

This project is a C-based TCP client-server program that demonstrates basic socket programming and client-server communication over localhost.

The goal of this project was to practice TCP networking concepts, socket creation, port binding, client-server communication, and basic network error handling.

## Tech Stack

- C
- TCP/IP
- Socket programming
- Unix/Linux networking
- GCC

## Features

- Creates a TCP server socket
- Binds the server to port 8080
- Listens for incoming client connections
- Accepts a client connection
- Sends a welcome message to the client
- Reads and prints messages from the client
- Creates a TCP client socket
- Connects the client to localhost
- Sends user input from the client to the server
- Handles basic socket and connection errors

## Key Concepts

This project demonstrates basic networking concepts, including:

- `socket()`
- `bind()`
- `listen()`
- `accept()`
- `connect()`
- `send()`
- `read()`
- ports
- localhost
- client-server architecture

## How It Works

The server creates a TCP socket, binds it to port 8080, listens for incoming client connections, and accepts a client. After a client connects, the server sends a welcome message and reads messages from the client.

The client creates a TCP socket, connects to the server at `127.0.0.1` on port 8080, receives the welcome message, and sends user input to the server.

## How to Run

Step 1: Compile the server.

Command: `gcc tcpserver.c -o tcpserver`

Step 2: Compile the client.

Command: `gcc tcpclient.c -o tcpclient`

Step 3: Run the server in one terminal window.

Command: `./tcpserver`

Step 4: Run the client in another terminal window.

Command: `./tcpclient`

Step 5: Type messages in the client terminal and observe them being received by the server.

## Support / Cloud Relevance

This project is relevant to technical support, cloud support, IT support, and NOC roles because these roles often involve troubleshooting network connectivity, ports, client-server communication, and connection failures.

For example, if a client cannot connect to a server, possible causes include:

- The server is not running
- The server is listening on a different port
- The client is connecting to the wrong address
- A firewall or security group is blocking the connection
- The network service failed to bind or listen correctly

## What I Learned

Through this project, I practiced:

- Creating TCP sockets in C
- Building a simple client-server program
- Understanding ports and localhost communication
- Handling basic connection errors
- Thinking through network troubleshooting scenarios# tcp-client-server
C-based TCP client-server program using sockets, localhost, and port 8080.
