import socket
import sys
str = input('Enter the website name:')
try:
    s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    print ("Socket is created successfully")
except socket.error as err:
        print ("socket creation failed %s" %(err))

port = 80

try:
    host_ip = socket.gethostbyname(str)
except socket.gaierror:
    print("there was an error resolving the host")
    sys.exit()

s.connect((host_ip,port))
print("the socket(%s) is successfully connected to host(%s)"%(port,host_ip))
