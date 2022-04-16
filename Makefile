.SILENT:

run:
	make build
	./main
build:
	gcc main.c -o main