exe: rock.o main.o
	@echo "compilation de l'executable"
	gcc rock.o main.o -o exe
rock.o: rock.c rock.h
	@echo "compilations de rock"
	gcc -c -Wall rock.c -o rock.o
main.o: main.c rock.h
	@echo "compilations du main"
	gcc -c -Wall main.c -o main.o
clean:
	@echo "J'ai tout effacé"
	rm -f *.o