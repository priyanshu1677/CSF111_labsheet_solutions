gcc -c student1.c
gcc -c student2.c
gcc -c student3.c
gcc -c checkAnswers.c


gcc -o exe1 student1.o checkAnswers.o 
gcc -o exe2 student2.o checkAnswers.o
gcc -o exe3 student3.o checkAnswers.o

rm *.o
rm *.exe