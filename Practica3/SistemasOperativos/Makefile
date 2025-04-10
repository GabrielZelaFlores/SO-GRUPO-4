# Nombre del ejecutable final
PROGRAMA = programa

# Archivos objeto
OBJECTS = salida_alt.o mensaje.o

# Regla por defecto
all: $(PROGRAMA)

# Regla para generar el ejecutable
$(PROGRAMA): $(OBJECTS)
	gcc $(OBJECTS) -o $(PROGRAMA)

# Regla para compilar salida_alt.c a salida_alt.o
salida_alt.o: salida_alt.c salida_alt.h
	gcc -c salida_alt.c -o salida_alt.o

# Regla para compilar mensaje.c a mensaje.o
mensaje.o: mensaje.c salida_alt.h
	gcc -c mensaje.c -o mensaje.o

# Regla para limpiar archivos generados
clean:
	rm -f $(OBJECTS) $(PROGRAMA)
