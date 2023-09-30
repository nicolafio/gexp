client:
	mkdir -p build
	cc -o build/gexp-client src/client/main.c $(shell sdl2-config --cflags --libs)

server:
	mkdir -p build
	go build -C src/server -o ../../build/gexp-server

clean:
	rm -r build
