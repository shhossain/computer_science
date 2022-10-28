# Networking

A computer network is a set of computers sharing resources located on or provided by network nodes. The computers use common communication protocols over digital interconnections to communicate with each other. These interconnections are made up of telecommunication network technologies, based on physically wired, optical, and wireless radio-frequency methods that may be arranged in a variety of network topologies.

The nodes of a computer network can include personal computers, servers, networking hardware, or other specialised or general-purpose hosts. They are identified by network addresses, and may have hostnames. Hostnames serve as memorable labels for the nodes, rarely changed after initial assignment. Network addresses serve for locating and identifying the nodes by communication protocols such as the Internet Protocol.

Computer networks may be classified by many criteria, including the transmission medium used to carry signals, bandwidth, communications protocols to organize network traffic, the network size, the topology, traffic control mechanism, and organizational intent.

## Node in Networking

In telecommunications networks, a node is either a redistribution point or a communication endpoint. The definition of a node depends on the network and protocol layer referred to. A physical network node is an electronic device that is attached to a network, and is capable of creating, receiving, or transmitting information over a communication channel.


## Types of Computer Networks

A computer network is a cluster of computers over a shared communication path that works for the purpose of sharing resources from one computer to an another

Some of the uses of computer networks are the following:

Communicating using email, video, instant messaging, etc.
Sharing devices such as printers, scanners, etc.
Sharing files
Sharing software and operating programs on remote systems
Allowing network users to easily access and maintain information


Types of Computer Networks are :

- Personal Area Network (PAN)
- Local Area Network (LAN)
- Wide Area Network (WAN)
- Wireless Local Area Network (WLAN)
- Campus Area Network (CAN)
- Metropolitan Area Network (MAN)


## Personal Area Network (PAN)
PAN is the most basic type of computer network. This network is restrained to a single person, that is, communication between the computer devices is centred only to an individual’s work space. PAN offers a network range of 10 meters from a person to the device providing communication.

Examples of PAN are USB, computer, phone, tablet, printer, PDA, etc.


![](https://media.geeksforgeeks.org/wp-content/uploads/20210501203401/Screenshot207.png)

## Local Area Network (LAN)

LAN is the most frequently used network. A LAN is a computer network that connects computers together through a common communication path, contained within a limited area, that is, locally. A LAN encompasses two or more computers connected over a server. The two important technologies involved in this network are Ethernet and Wi-fi. 

Examples of LAN are networking in a home, school, library, laboratory, college, office, etc.


![](https://media.geeksforgeeks.org/wp-content/uploads/20210502003635/Screenshot228.png)

## Wide Area Network (WAN) :
WAN is a type of computer network that connects computers over a large geographical distance through a shared communication path. It is not restrained to a single location but extends over many locations. WAN can also be defined as a group of local area networks that communicate with each other. 

The most common example of WAN is the Internet.

![](https://media.geeksforgeeks.org/wp-content/uploads/20210501212445/Screenshot209.png)

## Wireless Local Area Network (WLAN) :

WLAN is a type of computer network that acts as a local area network but makes use of wireless network technology like Wi-Fi. This network doesn’t allow devices to communicate over physical cables like in LAN but allows devices to communicate wirelessly. 

The most common example of WLAN is Wi-Fi.

![](https://media.geeksforgeeks.org/wp-content/uploads/20210501214003/Screenshot210.png)

## Campus Area Network (CAN) :
CAN is bigger than a LAN but smaller than a MAN. This is a type of computer network which is usually used in places like a school or college. This network covers a limited geographical area that is, it spreads across several buildings within the campus.

Examples of CAN are networks that cover schools, colleges, buildings, etc.

![](https://media.geeksforgeeks.org/wp-content/uploads/20210501214913/Screenshot211.png)
                                                     

## Metropolitan Area Network (MAN) : 
A MAN is larger than a LAN but smaller than a WAN. This is the type of computer network that connects computers over a geographical distance through a shared communication path over a city, town or metropolitan area. 

Examples of MAN are networking in towns, cities, a single large city, large area within multiple buildings, etc.

 ![](https://media.geeksforgeeks.org/wp-content/uploads/20210501222057/Screenshot215.png)

 ## Network Toplogies

The physical or geographic locations of network nodes and links generally have relatively little effect on a network, but the topology of interconnections of a network can significantly affect its throughput and reliability. With many technologies, such as bus or star networks, a single failure can cause the network to fail entirely. In general, the more interconnections there are, the more robust the network is; but the more expensive it is to install. Therefore most network diagrams are arranged by their network topology which is the map of logical interconnections of network hosts.    

The common Network Toplogies are :

- Bus Topology
- P2P Topology
- Ring Topology
- Star Topology
- Mesh Topology
- Tree Topology
- Hybrid Topology

## Bus Topology:
Bus topology is a network type in which every computer and network device is connected to a single cable. It transmits the data from one end to another in a single direction. It is a multi-point connection and a non-robust topology because if the backbone fails the topology crashes


![](https://media.geeksforgeeks.org/wp-content/uploads/3-55.png)

 Advantages of this topology: 

- If N devices are connected to each other in a bus topology, then the number of cables required to connect them is 1, which is known as backbone cable, and N drop lines are required.
- Coaxial or twisted pair cables are mainly used in bus based networks that support up to 10 Mbps.
- The cost of the cable is less compared to other topologies, but it is used to build small networks.
- Bus topology is familiar technology as installation and troubleshooting techniques are well known.

 Problems with this topology: 

- A bus topology is quite simpler , but still it requires a lot of cabling.
- If the common cable fails, then the whole system will crash down.
 -If the network traffic is heavy, it increases collisions in the network. To avoid this, various protocols are used in the MAC layer known as Pure Aloha, Slotted Aloha, CSMA/CD, etc.
- Adding new devices to network would slow down networks.
- Security is very low.

## P2P Topology

Point-to-point topology is the easiest of all the network topologies. In this method, the network
consists of a direct link between two computers.

![image](https://user-images.githubusercontent.com/72157334/196505845-b071a26d-65fa-41af-8dbd-153344d0227b.png)


## Ring Topology:

In this topology, it forms a ring connecting devices with exactly two neighboring devices.

A number of repeaters are used for Ring topology with a large number of nodes, because if someone wants to send some data to the last node in the ring topology with 100 nodes, then the data will have to pass through 99 nodes to reach the 100th node. Hence to prevent data loss repeaters are used in the network.

![](https://media.geeksforgeeks.org/wp-content/uploads/4-32.png)

Advantages of this topology: 

- The data transmission is high-speed.
- The possibility of collision is minimum in this type of topology.
Cheap to install and expand.
- It is less costly than a star topology.
  
 Problems with this topology: 

- The failure of a single node in the network can cause the entire network to fail.
- Troubleshooting is difficult in this topology.
- The addition of stations in between or removal of stations can disturb the whole topology.
Less secure.

## Star Topology:

In star topology, all the devices are connected to a single hub through a cable. This hub is the central node and all other nodes are connected to the central node. The hub can be passive in nature i.e., not an intelligent hub such as broadcasting devices, at the same time the hub can be intelligent known as an active hub. Active hubs have repeaters in them. Coaxial cable or RJ-45 cables are used to connect the computers.

![](https://media.geeksforgeeks.org/wp-content/uploads/2-49.png)

Advantages of this topology: 

- If Number of devices are connected to each other in a star topology, then the number of cables required to connect them . So, it is easy to set up.
- Each device requires only 1 port i.e. to connect to the hub, therefore the total number of ports required is N.
It is Robust. If one link fails only that link will affect and not other than that.
- Easy to fault identification and fault isolation.
- Star topology are cost-effective as it uses inexpensive coaxial cable.
  
Problems with this topology: 

- If the concentrator (hub) on which the whole topology relies fails, the whole system will crash down.
- The cost of installation is high.
- Performance is based on the single concentrator i.e.Hub.

## Mesh Topology:

In a mesh topology, every device is connected to another device via a particular channel. 

![](https://media.geeksforgeeks.org/wp-content/uploads/1-75.png)

Advantages of this topology: 

- Communication is very fast between at the nodes.
- It is robust.
- The fault is diagnosed easily. Data is reliable because data is transferred among the devices through dedicated channels or links.
- Provides security and privacy.

Problems with this topology: 

- Installation and configuration are difficult.
- The cost of cables is high as bulk wiring is required, hence suitable for less number of devices.
- The cost of maintenance is high.

## Tree Topology :

This topology is the variation of the Star topology. This topology has a hierarchical flow of data. 

![](https://media.geeksforgeeks.org/wp-content/uploads/20200614134830/tree-topology2.png)

Advantages of this topology : 

- It allows more devices to be attached to a single central hub thus it decreases the distance that is traveled by the signal to come to the devices.
- It allows the network to get isolated and also prioritize from different computers.
- We can add new device to existing network.
- The Error detection and error correction is very easy in tree topology.
  
Problems with this topology :  

- If the central hub gets fails the entire system fails.
- The cost is high because of cabling.
- If new devices are added, it becomes difficult to reconfigure.

## Hybrid Topology :

This topology technology is the combination of all the various types of topologies we have studied above. It is used when the nodes are free to take any form. It means these can be individuals such as Ring or Star topology or can be a combination of various types of topologies seen above.

![](https://media.geeksforgeeks.org/wp-content/uploads/20220610155821/Untitleddesign.png)

Advantages of this topology : 

- This topology is very flexible.
- the size of network can be easily expanded by adding new device.
  
Problems with this topology :

- It is very difficult to design the architecture of the Hybrid Network.
- Hubs used in this topology are very expensive.
- The infrastructure cost is very high as hybrid network requires a lot of cabling, network devices.

## Features Of Computer network
- Communication speed
- File sharing
- Back up and Roll back is easy
- Software and Hardware sharing
- Security
- Scalability
- Reliability

## Computer Network Architecture

The physical and logical layout of the software, hardware, protocols, and data transmission media is referred to as computer network architecture. That is, how tasks are assigned to computers and how computers are organised.

### The two types of network architectures are used:

Computer Network Architecture
- Peer-To-Peer network
- Client/Server network

### Peer-to-Peer Networks
Workgroup or peer-to-peer networks are networks without an authentication server. When low security is necessary when there are only a few computers on a network, this paradigm works well. They are typical of networks in small offices or homes. All machines in a workgroup are capable of offering both client and server services.

#### Advantages Of Peer-To-Peer Network:
- It is less costly as it does not contain any dedicated server.
- If one computer stops working but, other computers will not stop working.
- It is easy to set up and maintain as each computer manages itself.

#### Disadvantages Of Peer-To-Peer Network:

- In the case of Peer-To-Peer network, it does not contain the centralized system . Therefore, it cannot back up the data as the data is different in different locations.
- It has a security issue as the device is managed itself.

### Client/Server network
The client-server paradigm, often known as the client-server architecture, is a distributed application framework that assigns duties to servers and clients that either share a system or connect via a computer network or the Internet. In order to use a service provided by a server, the client must make a request to another software. One or more applications are run on the server to share resources and divide work across clients.

A standard communications protocol that clearly defines the rules, vocabulary, and dialogue patterns to be utilised must be followed when communicating in a client-server connection using a request-response message pattern. The TCP/IP protocol suite is commonly used for client-server communication.

#### Advantages Of Client/Server Network:

- The centralised system is housed within a client/server network. As a result, we can effortlessly backup the data. 
- A dedicated server in a client/server network boosts the system's overall performance. 
- Because a single server manages the shared resources, security is greater in client/server networks. 
- Additionally, it speeds up the process of exchanging resources.

#### Disadvantages Of Client/Server Network: 

- Due to the need for a server with a lot of memory, client/server networks are expensive. 
- A server uses a Network Operating System (NOS) to provide clients access to resources, however NOS is quite expensive. 
- To oversee all the resources, a dedicated network administrator is needed.


## Network Protocols
A network protocol is an established set of rules that determine how data is transmitted between different devices in the same network. Essentially, it allows connected devices to communicate with each other, regardless of any differences in their internal processes, structure or design. Network protocols are the reason you can easily communicate with people all over the world, and thus play a critical role in modern digital communications.

 ## How Network Protocols Work

Network protocols take large-scale processes and break them down into small, specific tasks or functions. This occurs at every level of the network, and each function must cooperate at each level to complete the larger task at hand. The term protocol suite refers to a set of smaller network protocols working in conjunction with each other.

Network protocols are typically created according to industry standard by various networking or information technology organizations.

## List of Network Protocols
There are thousands of different network protocols, but they all perform one of three primary actions:

- Communication
- Network management
- Security

Each type is necessary to use network devices swiftly and safely, and they work together to facilitate that usage.

## Communication
Communication protocols allow different network devices to communicate with each other. They are used in both analog and digital communications and can be used for important processes, ranging from transferring files between devices to accessing the internet.

Common types of communication protocols include the following:

- Automation: These protocols are used to automate different processes in both commercial and personal settings, such as in smart buildings, cloud technology or self-driving vehicles.
- Instant messaging: Instantaneous, text-based communications on smartphones and computers occur because of a number of different instant messaging network protocols.
- Routing: Routing protocols permit communication between routers and other network devices. There are also routing protocols specifically for ad hoc networks.
- Bluetooth: Ever-popular Bluetooth devices — including headsets, smartphones and computers — work due to a variety of different Bluetooth protocols.
- File transfer: If you have ever moved files from one device to another, either via a physical or digital medium, you’ve used file transfer protocols (FTP).
- Internet Protocol: Internet Protocol (IP) allows data to be sent between devices via the internet. The internet could not operate as it currently does without IP.

## Network Management
Network management protocols define and describe the various procedures needed to effectively operate a computer network. These protocols affect various devices on a single network — including computers, routers and servers — to ensure each one, and the network as a whole, perform optimally.

The functions of network management protocols include the following:

- Connection: These protocols establish and maintain stable connections between different devices on the same network.
- Link aggregation: Link aggregation protocols allow you to combine multiple network connections into one link between two devices. This works to increase the strength of the connection and helps sustain the connection should one of the links fail.
- Troubleshooting: Troubleshooting protocols allow network administrators to identify errors affecting the network, evaluate the quality of the network connection, and determine how administrators can fix any issues.

## Security
Security protocols, also called cryptographic protocols, work to ensure that the network and the data sent over it are protected from unauthorized users.

Common functions of security network protocols include the following:

- Encryption: Encryption protocols protect data and secure areas by requiring users to input a secret key or password in order to access that information.
- Entity Authentication: Entity authentication protocols create a system that requires different devices or users on a network to verify their identity before accessing secure areas.
- Transportation: Transportation security protocols protect data while it is transported from one network device to another.

## Network Protocol Example
Whether you know it or not, you’ve absolutely encountered network protocols when using electronic devices – and some of them are readily identifiable.

### Common Network Protocols
- [TCP(Transmission Control Protocol)](#tcp-transmission-control-protocol)
- [UDP(User Datagram Protocol)](#udp-user-datagram-protocol)
- [HTTP(HyperText Transfer Protocol)](#http-hypertext-transfer-protocol)
- [HTTPS(HyperText Transfer Protocol Secure)](#https-hypertext-transfer-protocol-secure)
- [FTP(File Transfer Protocol)](#ftp-file-transfer-protocol)
- [SMTP(Simple Mail Transfer Protocol)](#smtp-simple-mail-transfer-protocol)
- [POP3(Post Office Protocol 3)](#pop3-post-office-protocol-3)
- [IMAP(Internet Message Access Protocol)](#imap-internet-message-access-protocol)
- [TELNET(Terminal Network))](#telnet-terminal-network)
- [PPP(Point-to-Point Protocol)](#ppp-point-to-point-protocol)

### TCP(Transmission Control Protocol)
TCP/IP(Transmission Control Protocol/ Internet Protocol): These are a set of standard rules that allows different types of computers to communicate with each other. The IP protocol ensures that each computer that is connected to the Internet is having a specific serial number called the IP address. TCP specifies how data is exchanged over the internet and how it should be broken into IP packets. It also makes sure that the packets have the information about the source of the message data, the destination of the message data, the sequence in which the message data should be re-assembled, and checks if the message has been sent correctly to the specific destination.

The functionality of TCP/IP is divided into 4 layers with each one having specific protocols:

Application Layer: The application layer makes sure that the data from the sending end is received in a format that is acceptable and supported at the receiving end.
Transport Layer: The transport layer is responsible for the smooth transmission of data from one end to the other. It is also responsible for reliable connectivity, error recovery, and flow control of the data.
Internet Layer: This Internet Layer moves packets from source to destination by connecting independent networks.
Network Access Layer: The Network Access Layer sees how a computer connects to a network.

#### UDP(User Datagram Protocol)
UDP is a connectionless protocol that does not guarantee reliable data transfer between two devices.

#### HTTP(HyperText Transfer Protocol)
This protocol is used to transfer hypertexts over the internet and it is defined by the www(world wide web) for information transfer. This protocol defines how the information needs to be formatted and transmitted. And, it also defines the various actions the web browsers should take in response to the calls made to access a  particular web page. Whenever a user opens their web browser, the user will indirectly use HTTP as this is the protocol that is being used to share text, images, and other multimedia files on the World Wide Web. 

#### HTTPS(HyperText Transfer Protocol Secure)
HTTPS is an extension of the Hypertext Transfer Protocol (HTTP). It is used for secure communication over a computer network with the SSL/TLS protocol for encryption and authentication. So, generally, a  website has an HTTP protocol but if the website is such that it receives some sensitive information such as credit card details, debit card details, OTP, etc then it requires an SSL certificate installed to make the website more secure. So, before entering any sensitive information on a website, we should check if the link is HTTPS or not. If it is not HTTPS then it may not be secure enough to enter sensitive information.

#### FTP(File Transfer Protocol)
This protocol is used for transferring files from one system to the other. This works on a client-server model. When a machine requests for file transfer from another machine, the FTO sets up a connection between the two and authenticates each other using their ID and Password. And, the desired file transfer takes place between the machines.

#### SFPT(SSH File Transfer Protocol)
SFTP which is also known as SSH FTP refers to File Transfer Protocol (FTP) over Secure Shell (SSH) as it encrypts both commands and data while in transmission. SFTP acts as an extension to SSH and encrypts files and data then sends them over a secure shell data stream. This protocol is used to remotely connect to other systems while executing commands from the command line.

#### SMTP(Simple Mail Transfer Protocol)
Simple Mail Transfer Protocol (SMTP) is an internet standard for electronic mail (email) transmission. It is used for sending and receiving emails.

#### POP3(Post Office Protocol 3)
Post Office Protocol 3 (POP3) is an internet standard for email retrieval. It is used by email clients to retrieve email messages from a mail server.

#### IMAP(Internet Message Access Protocol)
Internet Message Access Protocol (IMAP) is an internet standard protocol for accessing email on a remote mail server. It is used by email clients to retrieve email messages from a mail server.

#### TELNET(Terminal Network)
TELNET is a standard TCP/IP protocol used for virtual terminal service given by ISO. This enables one local machine to connect with another. The computer which is being connected is called a remote computer and which is connecting is called the local computer. TELNET operation lets us display anything being performed on the remote computer in the local computer. This operates on the client/server principle. The local computer uses the telnet client program whereas the remote computer uses the telnet server program.

#### PPP(Point to Point Protocol)
It is a communication protocol that is used to create a direct connection between two communicating devices. This protocol defines the rules using which two devices will authenticate with each other and exchange information with each other. For example, A user connects his PC to the server of an Internet Service Provider also uses PPP. Similarly, for connecting two routers for direct communication it uses PPP.

## [OSI Model](OSI%20Model/readme.md#osi-model)
OSI stands for **Open Systems Interconnection**. It has been developed by ISO – ‘**International Organization for Standardization**‘, in the year 1984. It is a 7 layer architecture with each layer having specific functionality to perform. All these 7 layers work collaboratively to transmit the data from one person to another across the globe. 


![](OSI%20Model/img/computer-network-osi-model-layers.png)

### **1\. Physical Layer (Layer 1) :**

The lowest layer of the OSI reference model is the physical layer. It is responsible for the actual physical connection between the devices. The physical layer contains information in the form of **bits.** It is responsible for transmitting individual bits from one node to the next. When receiving data, this layer will get the signal received and convert it into 0s and 1s and send them to the Data Link layer, which will put the frame back together.  

![](OSI%20Model/img/computer-network-osi-model-layers-bits.png)

The functions of the physical layer are as follows:  

1.  **Bit synchronization:** The physical layer provides the synchronization of the bits by providing a clock. This clock controls both sender and receiver thus providing synchronization at bit level.
2.  **Bit rate control:** The Physical layer also defines the transmission rate i.e. the number of bits sent per second.
3.  **Physical topologies:** Physical layer specifies the way in which the different, devices/nodes are arranged in a network i.e. bus, star, or mesh topology.
4.  **Transmission mode:** Physical layer also defines the way in which the data flows between the two connected devices. The various transmission modes possible are Simplex, half-duplex and full-duplex.

### **2\. Data Link Layer (DLL) (Layer 2) :**

The data link layer is responsible for the node-to-node delivery of the message. The main function of this layer is to make sure data transfer is error-free from one node to another, over the physical layer. When a packet arrives in a network, it is the responsibility of DLL to transmit it to the Host using its MAC address.   
Data Link Layer is divided into two sublayers:  

1.  Logical Link Control (LLC)
2.  Media Access Control (MAC)

The packet received from the Network layer is further divided into frames depending on the frame size of NIC(Network Interface Card). DLL also encapsulates Sender and Receiver’s MAC address in the header. 

The Receiver’s MAC address is obtained by placing an ARP(Address Resolution Protocol) request onto the wire asking “Who has that IP address?” and the destination host will reply with its MAC address.  

![](OSI%20Model/img/computer-network-osi-model-layers-framing.png)

The functions of the Data Link layer are :  

1.  **Framing:** Framing is a function of the data link layer. It provides a way for a sender to transmit a set of bits that are meaningful to the receiver. This can be accomplished by attaching special bit patterns to the beginning and end of the frame.
2.  **Physical addressing:** After creating frames, the Data link layer adds physical addresses (MAC address) of the sender and/or receiver in the header of each frame.
3.  **Error control:** Data link layer provides the mechanism of error control in which it detects and retransmits damaged or lost frames.
4.  **Flow Control:** The data rate must be constant on both sides else the data may get corrupted thus, flow control coordinates the amount of data that can be sent before receiving acknowledgement.
5.  **Access control:** When a single communication channel is shared by multiple devices, the MAC sub-layer of the data link layer helps to determine which device has control over the channel at a given time.

### **3\. Network Layer (Layer 3) :**

The network layer works for the transmission of data from one host to the other located in different networks. It also takes care of packet routing i.e. selection of the shortest path to transmit the packet, from the number of routes available. The sender & receiver’s IP addresses are placed in the header by the network layer. 

The functions of the Network layer are :  

1.  **Routing:** The network layer protocols determine which route is suitable from source to destination. This function of the network layer is known as routing.
2.  **Logical Addressing:** In order to identify each device on internetwork uniquely, the network layer defines an addressing scheme. The sender & receiver’s IP addresses are placed in the header by the network layer. Such an address distinguishes each device uniquely and universally.

### **4\. Transport Layer (Layer 4) :**

The transport layer provides services to the application layer and takes services from the network layer. The data in the transport layer is referred to as Segments. It is responsible for the End to End Delivery of the complete message. The transport layer also provides the acknowledgement of the successful data transmission and re-transmits the data if an error is found.

The functions of Transport layer are : 
1. **Service-point addressing:**  The transport layer adds the header that contains the address known as a service-point address or port address. The responsibility of the network layer is to transmit the data from one computer to another computer and the responsibility of the transport layer is to transmit the message to the correct process.
2. **Segmentation and reassembly:** Tt divides the message into multiple segments, and each segment is assigned with a sequence number that uniquely identifies each segment. When the message has arrived at the destination, it reassembles the message based on their sequence numbers.
3. **Connection control:** Transport layer provides two services Connection-oriented service and connectionless service. A connectionless service treats each segment as an individual packet, and they all travel in different routes to reach the destination. A connection-oriented service makes a connection with the transport layer at the destination machine before delivering the packets.
4. **Flow control:** The transport layer also responsible for flow control but it is performed end-to-end rather than across a single link.
5. **Error control:** Error control is performed end-to-end rather than across the single link. The sender transport layer ensures that message reach at the destination without any error.

### **5\. Session Layer (Layer 4) :**

The Session layer is used to establish, maintain and synchronizes the interaction between communicating devices.
The functions of session layer are:
1. **Dialog control:** Session layer acts as a dialog controller that creates a dialog between two processes or we can say that it allows the communication between two processes which can be either half-duplex or full-duplex.
2. **Synchronization:** Session layer adds some checkpoints when transmitting the data in a sequence. If some error occurs in the middle of the transmission of data, then the transmission will take place again from the checkpoint. This process is known as Synchronization and recovery.

### **6\. Presentation Layer (Layer 5) :**

The presentation layer is also called the Translation layer. The data from the application layer is extracted here and manipulated as per the required format to transmit over the network. 
The functions of the presentation layer are : 
1. **Translation:** For example, ASCII to EBCDIC.
2. **Encryption/ Decryption:** Data encryption translates the data into another form or code. The encrypted data is known as the ciphertext and the decrypted data is known as plain text. A key value is used for encrypting as well as decrypting data.
3. **Compression:** Reduces the number of bits that need to be transmitted on the network.

### **7\. Application Layer (Layer 7) :**

At the very top of the OSI Reference Model stack of layers, we find the Application layer, also called as Desktop Layer, which is implemented by the network applications. These applications produce the data, which has to be transferred over the network. This layer also serves as a window for the application services to access the network and for displaying the received information to the user. 

Example: Application – Browsers, Skype Messenger, etc. 

The functions of the Application layer are :  

1. Network Virtual Terminal
2. FTAM-File transfer access and management
3. Mail Services
4. Directory Services
