#ifndef __WEATHER_H
#define __WEATHER_H
#include <stdio.h>
#include <stdlib.h>
struct weather
{
    char city_name[20], weekdays[10];
    float max_temp, min_temp, avg_temp, humidity;
};

struct WeatherNode
{
    struct weather weather_info;
    struct WeatherNode *next;
};
struct WeatherLinkedList
{
    int count;
    struct WeatherNode *first;
};
struct weather* readWeatherInfo(int day);
void printWeatherInfo(struct weather * weatherDetails, int day);
struct WeatherLinkedList * createWeatherSLL(struct weather * weatherDetails, int day);
void printWeatherSLL(struct WeatherLinkedList * newList);
void printStats(struct WeatherLinkedList * newList);
#endif
