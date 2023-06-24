rm *.o
rm exe
gcc -c WeatherDetails.c main.c
gcc -o exe WeatherDetails.o main.o -lm
./exe
