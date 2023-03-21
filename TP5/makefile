exe: fonctions.o main.o trisLents.o
	@echo "compilation de l'executable"
	gcc trisLents.o fonctions.o main.o -o exe
trisLents.o: trisLents.c trisLents.h
	@echo "compilations de trisLents"
	gcc -c -Wall trisLents.c -o trisLents.o
fonctions.o: fonctions.c fonctions.h
	@echo "compilations de fonctions"
	gcc -c -Wall fonctions.c  -o fonctions.o
main.o: main.c fonctions.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o
