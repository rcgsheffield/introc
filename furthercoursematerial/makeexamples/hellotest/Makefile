#Makefile for ising model

##### User configurable options #####
include make_iceberg
### End User configurable options ###




OBJ = hellotest.o 

#Compile
hellotest: $(OBJ)
	$(CC) -o $(@) $(OBJ) $(INCLUDE) $(LIBS) $(FLAGS) $(LINKFLAGS)
	
.cpp.o:
	$(CC) $(INCLUDE) $(LINKFLAGS) $(LIBS) -c $<

all:hellotest
	
clean:
	-rm $(OBJ) hellotest


