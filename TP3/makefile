# Mon premier makefile
exe: puissance4.o main.o
	@echo "compilation de l'executable"
	gcc puissance4.o main.o -o exe
puissance4.o: puissance4.c puissance4.h
	@echo "compilations de fonctions"
	gcc -c -Wall puissance4.c  -o puissance4.o
main.o: main.c puissance4.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o
