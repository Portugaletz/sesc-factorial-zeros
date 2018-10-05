run:bunny
	./bunny
bunny:prog.c
	gcc -std=c11 prog.c -o bunny
build:bunny
