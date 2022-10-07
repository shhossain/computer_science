
## NETWORKING

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

Here are a few examples of the most commonly used network protocols:

- Hypertext Transfer Protocol (HTTP): This Internet Protocol defines how data is transmitted over the internet and determines how web servers and browsers should respond to commands. This protocol (or its secure counterpart, HTTPS) appears at the beginning of various URLs or web addresses online.
- Secure Socket Shell (SSH): This protocol provides secure access to a computer, even if it’s on an unsecured network. SSH is particularly useful for network administrators who need to manage different systems remotely.
- Short Message Service (SMS): This communications protocol was created to send and receive text messages over cellular networks. SMS refers exclusively to text-based messages. Pictures, videos or other media require Multimedia Messaging Service (MMS), an extension of the SMS protocol.
