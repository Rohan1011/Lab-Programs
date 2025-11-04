# Semester VII Course Syllabus

## Table of Contents
1. [Internet of Things (BCS701)](#internet-of-things-bcs701)
2. [Parallel Computing (BCS702)](#parallel-computing-bcs702)
3. [Cryptography & Network Security (BCS703)](#cryptography--network-security-bcs703)
4. [Deep Learning (BCS714A)](#deep-learning-bcs714a)

---

## Internet of Things (BCS701)

### Course Details
- **Course Code:** BCS701
- **Semester:** VII
- **Credits:** 04
- **Teaching Hours/Week:** L:T:P:S = 3:0:2:0
- **Total Hours:** 40 hours Theory + 8-10 Lab slots
- **CIE Marks:** 50
- **SEE Marks:** 50
- **Total Marks:** 100
- **Exam Hours:** 03
- **Examination Nature:** Theory/Practical

### Course Objectives
- Understand the fundamentals of Internet of Things and its building blocks along with their characteristics
- Understand recent application domains of IoT in everyday life
- Understand protocols and standards designed for IoT and current research
- Understand associated technologies like cloud and fog computing in IoT domain
- Improve knowledge about cutting-edge technologies in IoT and machine learning applications
- Gain insights about current trends of machine learning and AI techniques used in IoT

### Teaching-Learning Process
1. Use of PowerPoint presentation
2. Think-pair and share techniques
3. Workshop on Arduino and Raspberry Pi
4. Usage of Tinker Cad tool
5. Overview of real-world applications of IoT from published papers

### Modules

#### MODULE-1: Introduction to Internet of Things
- Introduction
- Physical design of IoT
- Logical Design of IoT
- IoT enabling technologies
- IoT Levels & Deployment Templates

**Textbook:** Ch.1

#### MODULE-2: IoT and M2M
- Introduction to M2M
- Difference between IoT and M2M
- SDN and NFV for IoT
- IoT System Management with NETCONF-YANG
- Need for IoT Systems Management
- Simple Network Management Protocol (SNMP)
- Network operator requirements
- NETCONF
- YANG
- IoT Systems Management with NETCONF-YANG

**Textbook:** Ch. 3.1-3.4, 4.1-4.6

#### MODULE-3: IoT Platforms Design Methodology
- Introduction
- IoT Design Methodology
- Case Study on IoT System for Weather Monitoring
- IoT Systems - Logical Design using Python:
  - Installing Python
  - Python Data Types and Data structures
  - Control flow
  - Functions
  - Modules
  - Packages
  - File Handling
  - Operations
  - Classes
  - Python Packages of Interest for IoT

**Textbook:** Ch.5.1-5.3, 6.2-6.11

#### MODULE-4: IoT Physical Devices & End points
- What is an IoT Device
- Raspberry Pi
  - About the Board
  - Linux on Raspberry Pi
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

### Practical Component (Lab Experiments)

1. Develop a program to blink 5 LEDs back and forth
2. Develop a program to interface a relay with Arduino board
3. Develop a program to deploy an intrusion detection system using Ultrasonic and sound sensors
4. Develop a program to control a DC motor with Arduino board
5. Develop a program to deploy smart street light system using LDR sensor
6. Develop a program to classify dry and wet waste with the Moisture sensor (DHT22)
7. Develop a program to read the pH value of various substances like milk, lime and water
8. Develop a program to detect gas leakage in the surrounding environment
9. Develop a program to demonstrate weather station readings using Arduino
10. Develop a program to setup a UART protocol and pass a string through the protocol
11. Develop a water level depth detection system using Ultrasonic sensor
12. Develop a program to simulate interfacing with the keypad module to record keystrokes

### Course Outcomes
At the end of the course, students will be able to:
- Explain the evolution of IoT, IoT networking components, and addressing strategies
- Analyze various sensing devices and actuator types
- Demonstrate the processing in IoT
- Apply different connectivity technologies
- Elaborate the need for Data Analytics and Security in IoT

### Assessment Details

#### CIE (Continuous Internal Evaluation) - 50 Marks
**Theory Component (25 marks):**
- 15 marks: Two Internal Assessment Tests (each 15 marks, 1-hour duration)
- 10 marks: Other assessment methods

**Practical Component (25 marks):**
- 15 marks: Experiment conduction and laboratory record
- 10 marks: Laboratory test after completion of all sessions

**Minimum Passing:** 40% (20 marks out of 50)

#### SEE (Semester End Examination) - 50 Marks
- Duration: 3 hours
- 10 questions, each for 20 marks
- 2 questions from each module
- Answer 5 full questions (one from each module)
- Minimum Passing: 35% (18 out of 50 marks)

**Overall Passing:** 40% (40 marks out of 100) in CIE + SEE combined

### Suggested Learning Resources

#### Textbook
Arshdeep Bahga, Vijay Madisetti, "Internet of Things - A Hands On Approach", Universities Press, 2014

#### Reference Books
1. David Hanes, Gonzalo Salgueiro, Patrick Grossetete, Robert Barton, Jerome Henry, "IoT Fundamentals: Networking Technologies, Protocols, and Use Cases for the Internet of Things", 1st Edition, Pearson Education (Cisco Press Indian Reprint)
2. Srinivasa K G, "Internet of Things", CENGAGE Learning India, 2017

#### Web Links and Video Lectures
- https://nptel.ac.in/noc/courses/noc19/SEM1/noc19-cs31/
- https://docs.arduino.cc/
- https://www.arduino.cc/education/certification
- https://www.udemy.com/topic/arduino/

### Activity Based Learning
- Mini projects by students (2 to 4) using Arduino board and Raspberry Pi boards – 10 Marks
- Demonstration of projects using Tinker Cad tool

---

## Parallel Computing (BCS702)

### Course Details
- **Course Code:** BCS702
- **Semester:** VII
- **Credits:** 04
- **Teaching Hours/Week:** L:T:P:S = 3:0:2:0
- **Total Hours:** 40 hours Theory + 8-10 Lab slots
- **CIE Marks:** 50
- **SEE Marks:** 50
- **Total Marks:** 100
- **Exam Hours:** 03
- **Examination Nature:** Theory/Practical

### Course Objectives
- Explore the need for parallel programming
- Explain how to parallelize on MIMD systems
- Demonstrate how to apply MPI library and parallelize suitable programs
- Demonstrate how to apply OpenMP pragma and directives to parallelize suitable programs
- Demonstrate how to design CUDA programs

### Teaching-Learning Process
1. Alternative effective teaching methods beyond traditional lectures
2. Use of Video/Animation to explain functioning of various concepts
3. Encourage collaborative (Group Learning) Learning in the class
4. Ask at least three HOT (Higher Order Thinking) questions in the class
5. Adopt Programming assignments that foster analytical skills and design thinking

### Modules

#### MODULE-1: Introduction to Parallel Programming
- Parallel Hardware and Parallel Software
- Classifications of parallel computers
- SIMD systems
- MIMD systems
- Interconnection networks
- Cache coherence
- Shared-memory vs. distributed-memory
- Coordinating the processes/threads
- Shared-memory and Distributed-memory

#### MODULE-2: GPU Programming and Hybrid Systems
- Programming hybrid systems
- MIMD systems
- GPUs
- Performance:
  - Speedup and efficiency in MIMD systems
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
- Caches, cache coherence and false sharing in OpenMP
- Tasking
- Thread safety

#### MODULE-5: GPU Programming with CUDA
- GPUs and GPGPU
- GPU architectures
- Heterogeneous computing
- Threads, blocks, and grids
- Nvidia compute capabilities and device architectures
- Vector addition
- Returning results from CUDA kernels
- CUDA trapezoidal rule I
- CUDA trapezoidal rule II: improving performance
- CUDA trapezoidal rule III: blocks with more than one warp

### Practical Component (Lab Experiments)

1. Write an OpenMP program to sort an array of n elements using both sequential and parallel mergesort (using Section). Record the difference in execution time
2. Write an OpenMP program that divides iterations into chunks containing 2 iterations (OMP_SCHEDULE=static,2). Output which iterations are executed by which thread
3. Write an OpenMP program to calculate n Fibonacci numbers using tasks
4. Write an OpenMP program to find prime numbers from 1 to n employing parallel for directive. Record serial and parallel execution times
5. Write an MPI Program to demonstrate MPI_Send and MPI_Recv
6. Write an MPI program to demonstrate deadlock using point-to-point communication and avoidance of deadlock by altering call sequence
7. Write an MPI Program to demonstrate Broadcast operation
8. Write an MPI Program to demonstrate MPI_Scatter and MPI_Gather
9. Write an MPI Program to demonstrate MPI_Reduce and MPI_Allreduce (MPI_MAX, MPI_MIN, MPI_SUM, MPI_PROD)

### Course Outcomes
At the end of the course, students will be able to:
- Explain the need for parallel programming
- Demonstrate parallelism in MIMD system
- Apply MPI library to parallelize code to solve given problems
- Apply OpenMP pragma and directives to parallelize code to solve given problems
- Design a CUDA program for given problems

### Assessment Details
Same structure as IoT course (CIE: 50 marks, SEE: 50 marks)

### Suggested Learning Resources

#### Textbooks
1. Peter S Pacheco, Matthew Malensek – "An Introduction to Parallel Programming", Second Edition, Morgan Kauffman
2. Michael J Quinn – "Parallel Programming in C with MPI and OpenMP", McGraw-Hill

#### Reference Books
1. Calvin Lin, Lawrence Snyder – "Principles of Parallel Programming", Pearson
2. Barbara Chapman – "Using OpenMP: Portable Shared Memory Parallel Programming", Scientific and Engineering Computation
3. William Gropp, Ewing Lusk – "Using MPI: Portable Parallel Programming", Third Edition, Scientific and Engineering Computation

#### Web Links
- Introduction to parallel programming: https://nptel.ac.in/courses/106102163

### Activity Based Learning
- Programming Assignment at higher bloom level (10 Marks)

---

## Cryptography & Network Security (BCS703)

### Course Details
- **Course Code:** BCS703
- **Semester:** VII
- **Credits:** 04
- **Teaching Hours/Week:** L:T:P:S = 4:0:0:0
- **Total Hours:** 50
- **CIE Marks:** 50
- **SEE Marks:** 50
- **Total Marks:** 100
- **Exam Hours:** 03
- **Examination Type:** Theory

### Course Objectives
1. Understand the basics of Cryptography concepts, Security and its principles
2. Analyze different Cryptographic Algorithms
3. Illustrate public and private key cryptography
4. Understand key distribution scenario and certification
5. Understand approaches and techniques to build protection mechanisms in order to secure computer networks

### Teaching-Learning Process
1. Alternative effective teaching methods beyond traditional lectures
2. Use of Video/Animation to explain functioning of various concepts
3. Encourage collaborative (Group Learning) Learning
4. Ask at least three HOT (Higher Order Thinking) questions
5. Adopt Problem Based Learning (PBL)
6. Introduce topics in manifold representations
7. Show different ways to solve the same problem
8. Discuss real-world applications of concepts
9. Use methods: Chalk and board, Active Learning, Case Studies

### Modules

#### MODULE-1: Classical Encryption (10 hours)
- A model for Network Security
- Classical encryption techniques:
  - Symmetric cipher model
  - Substitution ciphers:
    - Caesar Cipher
    - Monoalphabetic Cipher
    - Playfair Cipher
    - Hill Cipher
    - Polyalphabetic Ciphers
  - One time pad
  - Steganography
- Block Ciphers and Data Encryption Standards:
  - Traditional Block Cipher structures
  - Data Encryption Standard (DES)
  - A DES Example
  - The strength of DES
  - Block cipher design principles

**Reference:** Chapter 1: 1.8, Chapter 3: 3.1, 3.2, 3.5, Chapter 4: 4.1-4.5

#### MODULE-2: Public Key Cryptography (10 hours)
- Pseudorandom number Generators:
  - Linear Congruential Generators
  - Blum Blum Shub Generator
- Public key cryptography and RSA:
  - Principles of public key cryptosystems
  - Applications for public key cryptosystems
  - Requirements for public key cryptography
  - Public key Cryptanalysis
  - The RSA algorithm
  - Computational aspects
  - The Security of RSA
- Diffie-Hellman key exchange:
  - The Algorithm
  - Key exchange Protocols
  - Man-in-the-middle Attack
- Elliptic Curve Cryptography:
  - Analog of Diffie-Hellman key Exchange
  - Elliptic Curve Encryption/Decryption
  - Security of Elliptic Curve Cryptography

**Reference:** Chapter 8: 8.2, Chapter 9: 9.1, 9.2, Chapter 10: 10.1, 10.4

#### MODULE-3: Hash Functions and Key Management (10 hours)
- Applications of Cryptographic Hash functions
- Two simple Hash functions
- Key management and distribution:
  - Symmetric key distribution using symmetric encryption
  - Symmetric key distribution using asymmetric encryption
  - Distribution of public keys
  - X.509 Certificates
  - Public Key Infrastructures

**Reference:** Chapter 11: 11.1, 11.2, Chapter 14: 14.1-14.5

#### MODULE-4: Authentication and Web Security (10 hours)
- User Authentication:
  - Remote user authentication principles
  - Kerberos
  - Remote user authentication using asymmetric encryption
- Web security consideration
- Transport layer security
- Email Threats and comprehensive email security
- S/MIME
- Pretty Good Privacy

**Reference:** Chapter 15: 15.1, 15.3, 15.4, Chapter 17: 17.1, 17.2, Chapter 19: 19.3-19.5

#### MODULE-5: Email and IP Security (10 hours)
- Domain Keys Identified Mail
- IP Security:
  - IP Security overview
  - IP Security Policy
  - Encapsulating Security Payload
  - Combining security associations
  - Internet key exchange

**Reference:** Chapter 19: 19.9, Chapter 20: 20.1-20.5

### Course Outcomes
At the end of the course, students will be able to:
- **CO1:** Explain the basic concepts of Cryptography and Security aspects
- **CO2:** Apply different Cryptographic Algorithms for different applications
- **CO3:** Analyze different methods for authentication and access control
- **CO4:** Describe key management, key distribution and Certificates
- **CO5:** Explain about Electronic mail and IP Security

### Assessment Details

#### CIE (Continuous Internal Evaluation) - 50 Marks
- **Assignment Component:** 25 marks
- **Internal Assessment Tests:** 25 marks
  - Two tests after 40-50% and 85-90% syllabus coverage
- Any two assignment methods; if project-based, only one assignment

**Minimum Passing:** 40% (20 marks out of 50)

#### SEE (Semester End Examination) - 50 Marks
- Duration: 3 hours
- 10 questions, each for 20 marks
- 2 questions from each module
- Answer 5 full questions (one from each module)

**Minimum Passing:** 35% (18 out of 50 marks)

**Overall Passing:** 40% (40 marks out of 100) in CIE + SEE combined

### Suggested Learning Resources

#### Textbook
William Stallings, "Cryptography and Network Security", Pearson Publication, Seventh Edition

#### References
1. Keith M Martin, "Everyday Cryptography", Oxford University Press
2. V.K Pachghare, "Cryptography and Network Security", PHI, 2nd Edition

### Activity Based Learning
- Group assignment (TWO) to implement Cryptographic Algorithms (15 + 10 marks)

---

## Deep Learning (BCS714A)

### Course Details
- **Course Code:** BCS714A
- **Semester:** VII
- **Credits:** 03
- **Teaching Hours/Week:** L:T:P:S = 3:0:0:0
- **Total Hours:** 40
- **CIE Marks:** 50
- **SEE Marks:** 50
- **Total Marks:** 100
- **Exam Hours:** 03
- **Examination Type:** Theory

### Course Objectives
- Understand the basic concepts of deep learning
- Know the basic working model of Convolutional Neural Networks and RNN in decision making
- Illustrate the strengths and weaknesses of many popular deep learning approaches
- Introduce major deep learning algorithms, problem settings, and their applications to solve real-world problems

### Teaching-Learning Process
1. Alternative effective teaching methods beyond traditional lectures
2. Use of Video/Animation/Demonstration to explain concepts
3. Encourage collaborative (Group Learning) Learning
4. Ask at least three HOT (Higher Order Thinking) questions
5. Adopt Problem/Practical Based Learning (PBL)
6. Use animations/videos to help students understand concepts
7. Demonstrate concepts using PYTHON and its libraries wherever possible

### Modules

#### MODULE-1: Introducing Deep Learning
**Biological and Machine Vision:**
- Biological Vision
- Machine Vision:
  - The Neocognitron
  - LeNet-5
  - The Traditional Machine Learning Approach
  - ImageNet and the ILSVRC
  - AlexNet
  - TensorFlow Playground

**Human and Machine Language:**
- Deep Learning for Natural Language Processing:
  - Deep Learning Networks Learn Representations Automatically
  - Natural Language Processing
  - A Brief History of Deep Learning for NLP
  - Computational Representations of Language:
    - One-Hot Representations of Words
    - Word Vectors
    - Word-Vector Arithmetic
    - word2vec
    - Localist Versus Distributed Representations
    - Elements of Natural Human Language

**Textbook 2:** Chapter 1, 2

#### MODULE-2: Regularization and Optimization
**Regularization for Deep Learning:**
- Parameter Norm Penalties
- Norm Penalties as Constrained Optimization
- Regularization and Under-Constrained Problems
- Dataset Augmentation
- Noise Robustness
- Semi-Supervised Learning
- Multi-Task Learning
- Early Stopping
- Parameter Tying and Parameter Sharing
- Sparse Representations

**Optimization for Training Deep Models:**
- How Learning Differs from Pure Optimization
- Basic Algorithms
- Parameter Initialization Strategies
- Algorithms with Adaptive Learning Rates

**Textbook 1:** Chapter 7 (7.1-7.10), Chapter 8 (8.1, 8.3-8.5)

#### MODULE-3: Convolutional Neural Networks
- The Convolution Operation
- Motivation
- Pooling
- Convolution and Pooling as an Infinitely Strong Prior
- Variants of the Basic Convolution Function
- Structured Outputs
- Data Types
- Efficient Convolution Algorithms
- Convolutional Networks and the History of Deep Learning

**Textbook 1:** Chapter 9 (9.1-9.8, 9.11)

#### MODULE-4: Sequence Modeling
**Recurrent and Recursive Nets:**
- Unfolding Computational Graphs
- Recurrent Neural Networks
- Bidirectional RNNs
- Encoder-Decoder Sequence-to-Sequence Architectures
- Deep Recurrent Networks
- Recursive Neural Networks
- Long Short-Term Memory

**Textbook 1:** Chapter 10 (10.1-10.6, 10.10)

#### MODULE-5: Interactive Applications of Deep Learning
**Natural Language Processing:**
- Preprocessing Natural Language Data:
  - Tokenization
  - Converting All Characters to Lowercase
  - Removing Stop Words and Punctuation
  - Stemming
  - Handling n-grams
  - Preprocessing the Full Corpus
- Creating Word Embeddings with word2vec:
  - The Essential Theory Behind word2vec
  - Evaluating Word Vectors
  - Running word2vec
  - Plotting Word Vectors
- The Area under the ROC Curve:
  - The Confusion Matrix
  - Calculating the ROC AUC Metric
- Natural Language Classification with Familiar Networks:
  - Loading the IMDb Film Reviews
  - Examining the IMDb Data
  - Standardizing the Length of the Reviews
  - Dense Network
  - Convolutional Networks
- Networks Designed for Sequential Data:
  - Recurrent Neural Networks
  - Long Short-Term Memory Units
  - Bidirectional LSTMs
  - Stacked Recurrent Models
  - Seq2seq and Attention
  - Transfer Learning in NLP

**Textbook 2:** Chapter 8

### Course Outcomes
At the end of the course, students will be able to:
1. Interpret the concepts of neural networks learning processes
2. Illustrate deep learning methods using regularization and Optimization process
3. Design deep learning models using convolutional operations
4. Analyze sequential data to build recurrent and recursive models
5. Demonstrate the different interactive applications of deep learning

### Assessment Details
Same structure as Cryptography & Network Security course (CIE: 50 marks, SEE: 50 marks)

---

## General Assessment Information

### Passing Criteria
For all courses:
- **CIE Minimum:** 40% (20 marks out of 50)
- **SEE Minimum:** 35% (18 marks out of 50)
- **Overall Minimum:** 40% (40 marks out of 100) in CIE + SEE combined

### SEE Question Paper Pattern
For all theory courses:
- Duration: 3 hours
- 10 questions total (2 per module)
- Each question: 20 marks
- Maximum 3 sub-questions per question
- Students answer 5 questions (one from each module)
- Marks scaled proportionally to 50

---

*Last Updated: October 21-22, 2024*