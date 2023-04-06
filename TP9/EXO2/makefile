exe: ecole.o main.o
	@echo "compilation de l'executable"
	gcc ecole.o main.o -o exe
ecole.o: ecole.c ecole.h
	@echo "compilations de ecole"
	gcc -c -Wall ecole.c -o ecole.o
main.o: main.c ecole.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o