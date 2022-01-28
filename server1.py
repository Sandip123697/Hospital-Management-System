import socket
import sys


port=12346

# creating socket object that works over TCP having IPv4 address
s = socket.socket()
## Binding to the port/ providing access over the port
s.bind(('', port))
print ("socket binded to %s" %(port))
## starts listening over the assigned PORT 
s.listen(5)

print("socket is listening")


while True:
	# waiting for client to connect 
	clientsocket, address = s.accept()
	print("Connected to {}". format(address))
	clientsocket.send("Hey! got connected!, Thanks for the same".encode())
	clientsocket.close()
	break
		
	
    
