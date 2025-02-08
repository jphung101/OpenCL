CC = g++
CFLAGS = -O3

macOS: macOS.cpp
	$(CC) $(CFLAGS) -o macOS macOS.cpp

clean:
	rm macOS