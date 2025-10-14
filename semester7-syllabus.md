# 7th Semester Course Syllabus

## 1. Internet of Things (IoT)

**Course Code:** BCS701  
**Credits:** 04  
**Teaching Hours/Week:** L:T:P:S = 3:0:2:0  
**CIE Marks:** 50 | **SEE Marks:** 50 | **Total Marks:** 100  
**Exam Hours:** 03  
**Examination Nature:** Theory/Practical

### Course Objectives
- Understand the fundamentals of Internet of Things and its building blocks along with their characteristics
- Understand the recent application domains of IoT in everyday life
- Understand the protocols and standards designed for IoT and the current research on it
- Understand the other associated technologies like cloud and fog computing in the domain of IoT
- Improve knowledge about the various cutting-edge technologies in the field IoT and machine learning applications
- Gain insights about the current trends of machine learning and AI techniques used in IoT to orient towards the present industrial scenario

### Teaching-Learning Process
1. Use of PowerPoint presentation
2. Think-pair and share techniques
3. Workshop on Arduino and Raspberry Pi
4. Usage of Tinker Cad tool
5. Overview of the real-world applications of IoT from the published papers

### Module Structure

#### MODULE-1: Introduction to Internet of Things
- Introduction
- Physical design of IoT
- Logical Design of IoT
- IoT enabling technologies
- IoT Levels & Deployment Templates

**Textbook:** Ch.1

#### MODULE-2: IoT and M2M
- Introduction: M2M, Difference between IoT and M2M
- SDN and NFV for IoT
- IoT System Management with NETCONF-YANG
- Need for IoT Systems Management
- Simple Network Management Protocol (SNMP)
- Network operator requirements
- NETCONF, YANG
- IoT Systems Management with NETCONF-YANG

**Textbook:** Ch. 3.1-3.4, 4.1-4.6

#### MODULE-3: IoT Platforms Design Methodology
- Introduction, IoT Design Methodology
- Case Study on IoT System for Weather Monitoring
- IoT Systems - Logical Design using Python:
  - Installing Python
  - Python Data Types and Data structures
  - Control flow, Functions, Modules, Packages
  - File Handling, Operations, Classes
  - Python Packages of Interest for IoT

**Textbook:** Ch.5.1-5.3, 6.2-6.11

#### MODULE-4: IoT Physical Devices & End points
- What is an IoT Device
- Raspberry Pi: About the Board, Linux on Raspberry Pi
- Raspberry Pi interfaces
- Programming Raspberry Pi with Python
- Case Studies illustrating IoT design:
  - Home Automation
  - Cities
  - Agriculture

**Textbook:** Ch. 7.1-7.6, 9.2, 9.3, 9.5

#### MODULE-5: Data Analytics for IoT
- Introduction
- Apache Hadoop
- Using Hadoop MapReduce for Batch Data Analytics
- Apache Oozie
- Apache Spark
- Apache Storm
- Using Apache Storm for Real-time Data Analysis

**Textbook:** Ch.10

### Practical Component

| Sl.No | Experiments |
|-------|-------------|
| 1 | Develop a program to blink 5 LEDs back and forth |
| 2 | Develop a program to interface a relay with Arduino board |
| 3 | Develop a program to deploy an intrusion detection system using Ultrasonic and sound sensors |
| 4 | Develop a program to control a DC motor with Arduino board |
| 5 | Develop a program to deploy smart street light system using LDR sensor |
| 6 | Develop a program to classify dry and wet waste with the Moisture sensor (DHT22) |
| 7 | Develop a program to read the pH value of various substances like milk, lime and water |
| 8 | Develop a program to detect the gas leakage in the surrounding environment |
| 9 | Develop a program to demonstrate weather station readings using Arduino |
| 10 | Develop a program to setup a UART protocol and pass a string through the protocol |
| 11 | Develop a water level depth detection system using Ultrasonic sensor |
| 12 | Develop a program to simulate interfacing with the keypad module to record the keystrokes |

### Course Outcomes
At the end of the course, the student will be able to:
- Explain the evolution of IoT, IoT networking components, and addressing strategies in IoT
- Analyze various sensing devices and actuator types
- Demonstrate the processing in IoT
- Apply different connectivity technologies
- Elaborate the need for Data Analytics and Security in IoT

### Assessment Details

#### CIE (Continuous Internal Evaluation) - 50%
- Theory component: 25 marks
  - Two Internal Assessment Tests: 15 marks
  - Other assessment methods: 10 marks
- Practical component: 25 marks
  - Experiment conduction and lab record: 15 marks
  - Lab test: 10 marks

#### SEE (Semester End Examination) - 50%
- Duration: 03 hours
- 10 questions (2 from each module), each for 20 marks
- Students answer 5 full questions (one from each module)
- Marks scaled down to 50

### Resources

**Textbook:**
- Arshdeep Bahga, Vijay Madisetti, "Internet of Things- A Hands On Approach", Universities press, 2014

**Reference Books:**
1. David Hanes, et al., "IoT Fundamentals: Networking Technologies, Protocols, and Use Cases for the Internet of Things", 1st Edition, Pearson Education
2. Srinivasa K G, "Internet of Things", CENGAGE Learning India, 2017

**Web Resources:**
- https://nptel.ac.in/noc/courses/noc19/SEM1/noc19-cs31/
- https://docs.arduino.cc/
- https://www.arduino.cc/education/certification
- https://www.udemy.com/topic/arduino/

---

## 2. Parallel Computing

**Course Code:** BCS702  
**Credits:** 04  
**Teaching Hours/Week:** L:T:P:S = 3:0:2:0  
**CIE Marks:** 50 | **SEE Marks:** 50 | **Total Marks:** 100  
**Exam Hours:** 03  
**Examination Nature:** Theory/Practical

### Course Objectives
- Explore the need for parallel programming
- Explain how to parallelize on MIMD systems
- Demonstrate how to apply MPI library and parallelize suitable programs
- Demonstrate how to apply OpenMP pragma and directives to parallelize suitable programs
- Demonstrate how to design CUDA programs

### Teaching-Learning Process
1. Alternative effective teaching methods
2. Use of Video/Animation to explain concepts
3. Encourage collaborative (Group Learning) in class
4. Ask at least three HOT (Higher order Thinking) questions in class
5. Adopt Programming assignments fostering analytical skills

### Module Structure

#### MODULE-1: Introduction to Parallel Programming
- Parallel hardware and parallel software
- Classifications of parallel computers
- SIMD systems, MIMD systems
- Interconnection networks
- Cache coherence
- Shared-memory vs. distributed-memory
- Coordinating processes/threads

#### MODULE-2: GPU Programming and Performance
- Programming hybrid systems
- MIMD systems, GPUs
- Performance – Speedup and efficiency in MIMD systems
- Amdahl's law
- Scalability in MIMD systems
- Taking timings of MIMD programs
- GPU performance

#### MODULE-3: Distributed Memory Programming with MPI
- MPI functions
- The trapezoidal rule in MPI
- Dealing with I/O
- Collective communication
- MPI-derived datatypes
- Performance evaluation of MPI programs
- A parallel sorting algorithm

#### MODULE-4: Shared-Memory Programming with OpenMP
- OpenMP pragmas and directives
- The trapezoidal rule
- Scope of variables
- The reduction clause
- Loop carried dependency
- Scheduling
- Producers and consumers
- Caches, cache coherence and false sharing
- Tasking and thread safety

#### MODULE-5: GPU Programming with CUDA
- GPUs and GPGPU
- GPU architectures
- Heterogeneous computing
- Threads, blocks, and grids
- Nvidia compute capabilities and device architectures
- Vector addition
- Returning results from CUDA kernels
- CUDA trapezoidal rule (I, II, III)

### Practical Component

| Sl.No | Experiments |
|-------|-------------|
| 1 | OpenMP program to sort array using sequential and parallel mergesort |
| 2 | OpenMP program for iteration chunks (OMP_SCHEDULE=static,2) |
| 3 | OpenMP program to calculate n Fibonacci numbers using tasks |
| 4 | OpenMP program to find prime numbers from 1 to n using parallel for directive |
| 5 | MPI Program demonstration of MPI_Send and MPI_Recv |
| 6 | MPI program demonstration of deadlock and avoidance |
| 7 | MPI Program demonstration of Broadcast operation |
| 8 | MPI Program demonstration of MPI_Scatter and MPI_Gather |
| 9 | MPI Program demonstration of MPI_Reduce and MPI_Allreduce |

### Course Outcomes
At the end of the course, the student will be able to:
- Explain the need for parallel programming
- Demonstrate parallelism in MIMD system
- Apply MPI library to parallelize code
- Apply OpenMP pragma and directives to parallelize code
- Design a CUDA program for given problems

### Assessment Details
Same structure as IoT course (50% CIE + 50% SEE)

### Resources

**Textbooks:**
1. Peter S Pacheco, Matthew Malensek – "An Introduction to Parallel Programming", second edition, Morgan Kauffman
2. Michael J Quinn – "Parallel Programming in C with MPI and OpenMP", McGrawHill

**Reference Books:**
1. Calvin Lin, Lawrence Snyder – "Principles of Parallel Programming", Pearson
2. Barbara Chapman – "Using OpenMP: Portable Shared Memory Parallel Programming"
3. William Gropp, Ewing Lusk – "Using MPI: Portable Parallel Programming", Third edition

**Web Resources:**
- Introduction to parallel programming: https://nptel.ac.in/courses/106102163

---

## 3. Cryptography & Network Security

**Course Code:** BCS703  
**Credits:** 04  
**Teaching Hours/Week:** L:T:P:S = 4:0:0:0  
**Total Hours:** 50  
**CIE Marks:** 50 | **SEE Marks:** 50 | **Total Marks:** 100  
**Exam Hours:** 3  
**Examination Type:** Theory

### Course Objectives
1. Understand the basics of Cryptography concepts, Security and its principle
2. Analyze different Cryptographic Algorithms
3. Illustrate public and private key cryptography
4. Understand the key distribution scenario and certification
5. Understand approaches and techniques to build protection mechanism to secure computer networks

### Teaching-Learning Process
1. Alternative effective teaching methods
2. Use of Video/Animation
3. Encourage collaborative learning
4. HOT (Higher order Thinking) questions
5. Problem Based Learning (PBL)
6. Introduce topics in manifold representations
7. Show different ways to solve the same problem
8. Discuss real-world applications
9. Methods: Chalk and board, Active Learning, Case Studies

### Module Structure

#### MODULE-1 (10 hours)
- A model for Network Security
- Classical encryption techniques:
  - Symmetric cipher model
  - Substitution ciphers: Caesar, Monoalphabetic, Playfair, Hill Cipher
  - Polyalphabetic Ciphers
  - One time pad
  - Steganography
- Block Ciphers and Data Encryption Standards:
  - Traditional Block Cipher structures
  - Data Encryption Standard (DES)
  - A DES Example
  - The strength of DES
  - Block cipher design principles

**Chapters:** 1.8, 3.1, 3.2, 3.5, 4.1-4.5

#### MODULE-2 (10 hours)
- Pseudorandom number Generators:
  - Linear Congruential Generators
  - Blum Blum Shub Generator
- Public key cryptography and RSA:
  - Principles of public key cryptosystems
  - Applications and requirements
  - Public key Cryptanalysis
  - The RSA algorithm
- Diffie-Hellman key exchange:
  - The Algorithm
  - Key exchange Protocols
  - Man-in-the-middle Attack
- Elliptic Curve Cryptography

**Chapters:** 8.2, 9.1, 9.2, 10.1, 10.4

#### MODULE-3 (10 hours)
- Applications of Cryptographic Hash functions
- Two simple Hash functions
- Key management and distribution:
  - Symmetric key distribution using symmetric encryption
  - Symmetric key distribution using asymmetric encryption
  - Distribution of public keys
  - X.509 Certificates
  - Public Key Infrastructures

**Chapters:** 11.1, 11.2, 14.1-14.5

#### MODULE-4 (10 hours)
- User Authentication:
  - Remote user authentication principles
  - Kerberos
  - Remote user authentication using asymmetric encryption
- Web security consideration
- Transport layer security
- Email Threats and comprehensive email security
- S/MIME
- Pretty Good Privacy

**Chapters:** 15.1, 15.3, 15.4, 17.1, 17.2, 19.3-19.5

#### MODULE-5 (10 hours)
- Domainkeys Identified Mail
- IP Security:
  - IP Security overview
  - IP Security Policy
  - Encapsulating Security Payload
  - Combining security associations
  - Internet key exchange

**Chapters:** 19.9, 20.1-20.5

### Course Outcomes
At the end of the course, the student will be able to:
- CO1: Explain the basic concepts of Cryptography and Security aspects
- CO2: Apply different Cryptographic Algorithms for different applications
- CO3: Analyze different methods for authentication and access control
- CO4: Describe key management, key distribution and Certificates
- CO5: Explain about Electronic mail and IP Security

### Assessment Details

#### CIE (50%)
- Assignment component: 25 marks
- Internal Assessment Test component: 25 marks
- First test after 40-50% syllabus coverage
- Second test after 85-90% syllabus coverage

#### SEE (50%)
- Duration: 03 hours
- 10 questions (2 from each module), each for 20 marks
- Students answer 5 full questions (one from each module)
- Marks scaled down to 50

### Resources

**Text Book:**
- William Stallings, "Cryptography and Network Security", Pearson Publication, Seventh Edition

**References:**
1. Keith M Martin, "Everyday Cryptography", Oxford University Press
2. V.K Pachghare, "Cryptography and Network Security", PHI, 2nd Edition

**Activity Based Learning:**
- Group assignments (TWO) to implement Cryptographic Algorithms (15 + 10 marks)