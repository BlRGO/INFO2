exe: fonctions.o main.o trisLents.o trisRapides.o
	@echo "compilation de l'executable"
	gcc trisLents.o trisRapides.o fonctions.o main.o -o exe
trisLents.o: trisLents.c trisLents.h
	@echo "compilations de trisLents"
	gcc -c -Wall trisLents.c -o trisLents.o
trisRapides.o: trisRapides.c trisRapides.h
		@echo "compilations de trisRapides"
		gcc -c -Wall trisRapides.c -o trisRapides.o
fonctions.o: fonctions.c fonctions.h
	@echo "compilations de fonctions"
	gcc -c -Wall fonctions.c  -o fonctions.o
main.o: main.c fonctions.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o
