@target (what is to be produce): what is needed to do so
@	how to produce

program: program.o weatherstats.o
	gcc -Wall program.o weatherstats.o -o program

program.o: program.c weatherstats.h
	gcc -Wall -c program.c -o program.o

weatherstats.o: weatherstats.c
	gcc -Wall -c weatherstats.c -o weatherstats.o