# Nombre del archivo ejecutable
PROG = programa

# Lista de archivos fuente
SRCS = ./jugador/jugador.cpp ./menu/menu.cpp ./juego/juego.cpp ./carta/carta.cpp ./dado/dado.cpp ./mazo/mazo.cpp

# Compilador a usar
CXX = g++

# Flags del compilador
CXXFLAGS = -Wall -g

# Regla para el objetivo 'all' (construye el ejecutable)
all: $(PROG)

$(PROG): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(PROG) $(SRCS)

# Regla para el objetivo 'clean' (elimina el ejecutable)
clean:
	rm -f $(PROG)
