#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "flights.h"
#define BUFFER_SIZE 200

int main(int argc, char *argv[])
{
    unsigned int passengercount = 0;
    FILE *fp = NULL;
    if (argc < 2){
        printf("ERROR NO ARGS\n");
        return (-1);
    }
    fp = fopen(argv[1], "r");
    if (!fp){
        printf("ERROR FILE NOT OPEN\n");
        return (-1);
    }
    Flight* flights = malloc(NUM_FLIGHTS * sizeof(*flights));
    
    char buffer[BUFFER_SIZE];
    char *sp;
    int i = 0;
    while(fgets(buffer, BUFFER_SIZE, fp) != NULL) {
        sp = strtok(buffer, ",");
        strcpy(flights[i].origin, sp);
        sp = strtok(NULL, ",");
        strcpy(flights[i].destination, sp);
        sp = strtok(NULL, ",");
        strcpy(flights[i].airline, sp);
        sp = strtok(NULL, ",");
        flights[i].passengers = atoi(sp);
        i++;
    }
    i = 0;
    char airlinecode[3];
    printf("airline: ");
    scanf("%s", airlinecode);
    int count = 0;
    for (i = 0; i < NUM_FLIGHTS; i++){
        if (strcmp(flights[i].airline,airlinecode) == 0){
            count++;
            passengercount = passengercount + flights[i].passengers;
        }
    }
    printf("airline: %s\r\n", airlinecode);
    printf("flights: %d\r\n", count);
    printf("passengers: %u\r\n", passengercount);
    free(flights);
    fclose(fp);
    return 0;
}
