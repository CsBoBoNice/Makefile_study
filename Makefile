#sample Makefile 



#默认动态编译 静态编译时 STATIC=-static

#默认使用gcc编译
CC = gcc
CC ?= gcc
GCC := $(CC)

objects := main.o delay.o show.o ProgressBar.o

edit : $(objects)
	$(GCC) $(STATIC) -o edit $(objects)
main.o : main.h delay.h
delay.o : delay.h show.h ProgressBar.h
show.o : show.h
ProgressBar.o : ProgressBar.h

.PHONY : clean
clean : 
	-rm -f edit $(objects)

