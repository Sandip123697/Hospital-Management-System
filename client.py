import socket

s=socket.socket()

port = 12346

s.connect(('192.168.43.17',port))

print ('Server Replied:',s.recv(1024).decode())
s.close()