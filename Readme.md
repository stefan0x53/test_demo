KONUX Case Study
===================================================

Stefan Dunca

Overview
--------

Cross-platform java rest event server and C++ event logger server installation instructions.

Compilation
------------------------------
1) First install the following dependencies based on your platform's installation instructions:
 * Java: Install jdk 1.8 and maven
 * Protobuf: download [java package](https://github.com/google/protobuf/releases/download/v3.5.1/protobuf-java-3.5.1.zip)
 and [compile and install the c++ runtime](https://github.com/google/protobuf/blob/master/src/README.md),
 which is included inot the package
 * Qt: [download](https://www.qt.io/download) the open-source version and install it 

2) Build rest-server using maven or IDE
3) Build event-logger using QtCreator or qmake

Deploy and Test
-----------------------------

Proceed trough the following steps in order to run the test demo
1) Run event-logger executable
2) Run rest-server

Each valid rest request will be logged to events.log in the event-logger's folder