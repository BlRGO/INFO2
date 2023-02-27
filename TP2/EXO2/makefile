# Mon premier makefile
exe: morpion.o main.o
	@echo "compilation de l'executable"
	gcc morpion.o main.o -o exe
puissance4.o: morpion.c morpion.h
	@echo "compilations de fonctions"
	gcc -c -Wall morpion.c  -o morpion.o
main.o: main.c morpion.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o
