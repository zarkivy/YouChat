/*******************************************************************************
* Filename : common.h
* Description :	this file is a basic head file
* *****************************************************************************/

#include<stdio.h>
#include<sys/stat.h>
#include<dirent.h>
#include<assert.h>
#include<fcntl.h>
#include<sys/epoll.h>
#include<pthread.h>
#include<netinet/in.h>
#include<time.h>
#include<sys/time.h>
#include<stdlib.h>
#include<termios.h>
#include<unistd.h>
#include<errno.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<mysql/mysql.h>

#define BUFFER_SIZE 1024

//time;
void string_formater(int source, char *dest);
void time_now_to_string(char *timestamp_now);