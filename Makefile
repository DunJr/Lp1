CC = g++

all:
	$(CC) -std=c++14 Aps.cpp Casas.cpp Imovel.cpp Terrenos.cpp Main.cpp -o main

clean:
	rm main
