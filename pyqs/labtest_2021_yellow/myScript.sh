rm *.o
rm exe

gcc -c medicalstore.c main.c
gcc -o exe medicalstore.o main.o -lm
./exe