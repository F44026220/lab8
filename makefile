tetris: tetris.o Mino.o MinoI.o MinoS.o MinoL.o MinoT.o genMino.o
	g++ -o tetris tetris.o Mino.o MinoI.o MinoS.o MinoL.o MinoT.o genMino.o

tetris.o: tetris.cpp
	g++ -c tetris.cpp

Mino.o: Mino.h Mino.cpp
	g++ -c Mino.cpp

MinoI.o: MinoI.h MinoI.cpp
	g++ -c MinoI.cpp

MinoS.o: MinoS.h MinoS.cpp
	g++ -c MinoS.cpp

MinoL.o: MinoL.h MinoL.cpp
	g++ -c MinoL.cpp

MinoT.o: MinoT.h MinoT.cpp
	g++ -c MinoT.cpp

genMino.o: genMino.h genMino.cpp
	g++ -c genMino.cpp
