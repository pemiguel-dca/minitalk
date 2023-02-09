The purpose of this project is to code a small data exchange program using UNIX signals.
In this project you will be able to see a communication between a server and a client, that communication is made using UNIX signals, since we only could use 2 signals in this project we communicate over zero's and one's (binary).

## Clone

```bash
git clone https://github.com/pemiguel-dca minitalk.git
```
When you have cloned the repo, you just need to run ```make``` inside of the 'src' directory.

## Server and Client

![image1](https://live.staticflickr.com/65535/52679602834_b9fdfe0e33_b.jpg)

Here the server as been open, and it's waiting for someone to communicate with him.

![image2](https://live.staticflickr.com/65535/52679613724_be210f8d35_b.jpg)

As you can see in the image this is how they communicate.
The first parameter is the PID and the second is the message you want to send.
The client also recognizes every character send, printing a message.

PS: The '.bonus' files are exactly the same as the others it's just a thing that 42School does to separate bonus from mandatory.