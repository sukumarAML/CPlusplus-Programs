In C++, input and output (I/O) operations are primarily handled through the standard library using streams, which are sequences of bytes flowing in or out of a program. The primary header file for console I/O is <iostream>. 
Core Concepts
Streams: Data flows in streams. An input stream moves data from an input device (like a keyboard) to the main memory, while an output stream moves data from memory to an output device (like a screen).
Standard Objects: The <iostream> header defines several standard stream objects:
1- std::cin: Standard input stream, usually the keyboard. It is an instance of the istream class.
2- std::cout: Standard output stream, usually the display screen. It is an instance of the ostream class.
3- std::cerr: Standard unbuffered error stream, for immediate error messages.
4- std::clog: Standard buffered log stream, for general log messages that can be stored temporarily. 
