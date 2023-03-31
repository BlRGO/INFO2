exe: soccer.o main.o
	@echo "compilation de l'executable"
	gcc soccer.o main.o -o exe
soccer.o: soccer.c soccer.h
	@echo "compilations de soccer"
	gcc -c -Wall soccer.c -o soccer.o
main.o: main.c soccer.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o