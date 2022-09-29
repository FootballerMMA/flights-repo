#ifndef FLIGHTS_H_   /* Include guard */
#define FLIGHTS_H_

#define NUM_FLIGHTS 200

struct Flight {
    char origin[4];
    char destination[4];
    char airline[3];
    unsigned int passengers;
};

#endif // FLIGHTS_H_
