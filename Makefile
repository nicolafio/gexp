client:
	mkdir -p build
	cc -o build/gexp src/main.c $(shell sdl2-config --cflags --libs)

clean:
	rm -r build
