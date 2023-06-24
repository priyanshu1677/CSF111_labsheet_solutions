rm *.o
rm exe

gcc -c grocerystore.c main.c
gcc -o exe grocerystore.o main.o -lm
./exe