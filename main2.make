main2:   main2.o reverse.o palindrome.o removevowel.o
	cc -w main2.o reverse.o palindrome.o removevowel.o -o main2

main2.o: palindrome.h removevowel.h

reverse.o: reverse.h

palindrome.o: palindrome.h reverse.h

removevowel.o: removevowel.h

clean:
	rm main2 main2.o reverse.o palindrome.o removevowel.o
