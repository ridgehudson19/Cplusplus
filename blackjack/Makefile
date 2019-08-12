
	 output: blackjack.o card.o deck.o 
		 g++ blackjack.o card.o deck.o -o output
	
blackjack.o: blackjack.cpp
		 g++ -c blackjack.cpp
		 
	 card.o: card.cpp	card.h
		 g++ -c card.cpp
		 
	 deck.o: deck.cpp	deck.h
	     g++ -c deck.cpp
		 
	clean:
		rm *.o
		
	