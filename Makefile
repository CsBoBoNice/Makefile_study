#sample Makefile 




#
#默认编译后的可执行程序为bin 可通过 BIN=bin.ext 来修改
BIN = bin

#默认动态编译 静态编译时 STATIC=-static

#默认使用gcc编译
CC = gcc
CC ?= gcc
GCC := $(CC)

objects := main.o delay.o show.o ProgressBar.o

$(BIN) : $(objects)
	$(GCC) $(STATIC) -o $(BIN) $(objects)
main.o : main.h delay.h
delay.o : delay.h show.h ProgressBar.h
show.o : show.h
ProgressBar.o : ProgressBar.h

.PHONY : clean
clean : 
	-rm -f $(BIN) $(objects)


