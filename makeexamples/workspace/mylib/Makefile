#simple Makefile for mylib

#Option -Wno-deprecated removes compiler warnings
#about use of deprecated libaries e.g. iostream.h fstream.h
# which are not part of the iso standard should
#use the standard libraries <iostream> and <fstream>

OBJ = vec.o 


#Compile
all : $(OBJ)
	ar -rv mylib.a $(OBJ)

#use a target to install the library to a selected directory 
install: all
	cp mylib.a ../lib/.
	
vec.o:
	g++   -ggdb -Wno-deprecated -c vec.cc

	
	
clean :
	rm mylib.a $(OBJ)
	



