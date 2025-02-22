CC = g++
CFLAGS = -O0
LDFLAGS = -framework OpenCL # Learn how frameworks work in make for macOS

macOS: macOS.cpp
	$(CC) $(CFLAGS) $(LDFLAGS) -o macOS macOS.cpp 

clean:
	rm macOS