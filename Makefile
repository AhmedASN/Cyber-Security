all: stupid_client
hello-world: stupid_client.o
	cc -g -o stupid_client stupid_client.o
hello-world.o: stupid_client.c
	cc -c -Wall -g stupid_client.c
clean:
	rm stupid_client.o stupid_client