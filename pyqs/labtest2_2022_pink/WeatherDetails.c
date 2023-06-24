#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "WeatherDetails.h"


struct weather * readWeatherInfo(int day)
{	
    struct weather *arr=(struct weather*)malloc(sizeof(struct weather)*day);
    for (int i=0;i<day;i++)
    {
    	printf("Record Number : %i\n",i+1);
    	printf("Enter City Name : ");
    	scanf("%s",arr[i].city_name);
    	printf("Enter Day : ");
    	scanf("%s",arr[i].weekdays);
    	if (strcmp(arr[i].weekdays,"Sunday")!=0 && strcmp(arr[i].weekdays,"Monday")!=0 && strcmp(arr[i].weekdays,"Tuesday")!=0)
    	{
    		printf("You can only enter Sunday, Monday and Tuesday as Weekdays\n");
    		return NULL;
    	}
    	printf("Enter Max Temperature : ");
    	scanf("%f",&(arr[i].max_temp));
    	printf("Enter Min Temperature : ");
    	scanf("%f",&(arr[i].min_temp));
    	printf("Enter Humidity : ");
    	scanf("%f",&(arr[i].humidity));
    	printf("\n"); 
    	arr[i].avg_temp=(arr[i].max_temp+arr[i].min_temp)/2.0;
    }
    return arr;
}

void printWeatherInfo(struct weather * wthr, int day)
{
	printf("\n##############\n");
    for (int i=0;i<day;i++)
    {
    	printf("Printing Record Number %i\n",i+1);
    	printf("City Name: %s \t",wthr[i].city_name);
    	printf("Weekdays: %s \t",wthr[i].weekdays);
    	printf("Max Temp: %.2f\n",wthr[i].max_temp);
    	printf("Min Temp: %.2f \t",wthr[i].min_temp);
    	printf("Avg Temp: %.2f \t",wthr[i].avg_temp);
    	printf("Humidity: %.2f\n\n",wthr[i].humidity);

    }
}

struct WeatherLinkedList * createWeatherSLL(struct weather * wthr, int day)
{
    struct WeatherLinkedList* LL=(struct WeatherLinkedList*)malloc(sizeof(struct WeatherLinkedList));
    struct WeatherNode* tmp;
    struct WeatherNode* node=(struct WeatherNode*)malloc(sizeof(struct WeatherNode));
    LL->first=node;
    LL->count=1;
    node->weather_info=wthr[day-1];
    node->next=NULL;
    tmp=node;
    for (int i=day-2;i>-1;i--)
    {
    	node=(struct WeatherNode*)malloc(sizeof(struct WeatherNode));
    	node->weather_info=wthr[i];
    	tmp->next=node;
    	node->next=NULL;
    	tmp=node;
    	LL->count++;
    }
    return LL;
}	

void printWeatherSLL(struct WeatherLinkedList * newList)
{
	printf("\n##############\nThe Linked List is : \n");
	struct WeatherNode* tmp;
	tmp=newList->first;
	while(tmp!=NULL)
	{
		printf("[City Name: %s\t",tmp->weather_info.city_name);
    	printf("Weekdays: %s\t",tmp->weather_info.weekdays);
    	printf("Max Temp: %.2f\n",tmp->weather_info.max_temp);
    	printf("Min Temp: %.2f \t",tmp->weather_info.min_temp);
    	printf("Avg Temp: %.2f \t",tmp->weather_info.avg_temp);
    	printf("Humidity: %.2f]==>\n\n",tmp->weather_info.humidity);
    	tmp=tmp->next;
	}
}

void printStats(struct  WeatherLinkedList * newList)
{
	struct WeatherNode* p;
	p=newList->first;
	struct weather arr[newList->count];
	int i=0;
	while(p!=NULL)
	{
		if(p->weather_info.max_temp>25 && p->weather_info.max_temp<41)
		{
			arr[i]=p->weather_info;
			i++;
		}
		p=p->next;
	}
	struct weather temp;
	for (int j=0;j<i;j++)
	{
		for (int k=j;k<i;k++)
		{
			if (arr[k].humidity<arr[j].humidity)
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
	printf("\nPrinting the weather records whose max_temp in range [26-40] sorted by Humidity : \n");
	for (int j=0;j<i;j++)
	{
		printf("[ City Name: %s\t",arr[j].city_name);
    	printf("Weekdays: %s\t",arr[j].weekdays);
    	printf("Max Temp: %.2f\n",arr[j].max_temp);
    	printf("Min Temp: %.2f \t",arr[j].min_temp);
    	printf("Avg Temp: %.2f \t",arr[j].avg_temp);
    	printf("Humidity: %.2f]\n\n",arr[j].humidity);
	}
}
