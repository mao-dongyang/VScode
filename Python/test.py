import socket

sockUDP = socket.socket(socket.AF_INET, socket.SOCK_DGRAM,
                        socket.IPPROTO_UDP)

my_IP = '192.168.1.156'

my_port = 2200

dest_IP = '192.168.1.18'

dest_port = 2200

sockUDP.bind((my_IP, my_port))

recevied = str(sockUDP.recv(2014))

print("I've got: " + recevied)

sockUDP.sendto(recevied.encode("utf-8"), (dest_IP, dest_port))

sockUDP.close
