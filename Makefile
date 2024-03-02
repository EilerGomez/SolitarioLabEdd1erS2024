CKLAGS = -c
CXX = g++
TARGET = programa

#all
all: .all-post

.all-post: Carta.o Pila.o Cola.o Tablero.o Main.o Nodo.o EntornoDeJuego.o Movimientos.o #main es el principal o main
	$(CXX) Carta.o Pila.o Cola.o Tablero.o Main.o Nodo.o EntornoDeJuego.o Movimientos.o -o $(TARGET)



Carta.o: Carta.cpp Carta.h
		$(CXX) -c Carta.cpp


Pila.o: Pila.cpp Pila.h
	$(CXX) -c Pila.cpp

Cola.o: Cola.cpp Cola.h
	$(CXX) -c Cola.cpp

Tablero.o: Tablero.cpp Tablero.h
	$(CXX) -c Tablero.cpp

Nodo.o: Nodo.cpp Nodo.o
	$(CXX) -c Nodo.cpp

EntornoDeJuego.o: EntornoDeJuego.cpp EntornoDeJuego.o
	$(CXX) -c EntornoDeJuego.cpp

Movimientos.o: Movimientos.cpp Movimientos.o
	$(CXX) -c Movimientos.cpp

clean:
	$(RM) *.o saludo core