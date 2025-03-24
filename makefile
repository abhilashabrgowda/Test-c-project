ABC.exe:main.o big2.o fact.o reverse.o palindrome.o big3.o sumof2.o finance1.o sortnumbers.o
	gcc -o ABC.exe main.o big2.o fact.o reverse.o palindrome.o big3.o sumof2.o finance1.o sortnumbers.o

main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
reverse.o:reverse.c
	gcc -c reverse.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
big3.o:big3.c
	gcc -c big3.c
sumof2.o:sumof2.c
	gcc -c sumof2.c
finance1.o:finance1.c
	gcc -c finance1.c
sortnumbers.o:sortnumbers.c
	gcc -c sortnumbers.c
