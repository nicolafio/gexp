client:
	mkdir -p build
	cc -o build/gexp-client src/client/main.c $(shell sdl2-config --cflags --libs)

clean:
	rm -r build
