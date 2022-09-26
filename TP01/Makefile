CC = g++ -Wall -O3
OBJETS = Arme.o Cloth.o Constellation.o Saint.o

Lancement : $(OBJETS)
	$(CC) -o main $(OBJETS)

main.o : main.cpp Arme.hpp Cloth.hpp Constellation.hpp Rang_Armure.hpp Saint.hpp Sexe.hpp
	$(CC) -c main.cpp

Saint.o : Saint.cpp Saint.hpp Sexe.hpp
	$(CC) -c Saint.cpp

Constellation.o : Constellation.cpp Constellation.hpp
	$(CC) -c Constellation.cpp

Cloth.o : Cloth.cpp Arme.hpp Rang_Armure.hpp
	$(CC) -c Cloth.cpp

clean:
	rm prog_graphe $(OBJETS)