.SILENT:

run:
	make build
	./main
	rm main
build:
	gcc main.c -o main