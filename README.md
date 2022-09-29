# flights-repo

flights-repo is a repositary containing all relevant files to run the main.c

## What does it do ?
main.c is a program that takes in specific data about airlines, passenger count, destination and origin.
It requires the use of command line to receive the file name that it should be opening.
Upon succesfully opening the file, the program will prompt the user to type in an airline.
Airline input should be in the two-letter abbreviation.
The program will then count all the flights that airline had,
and the passengers it flew over those flights.
This information will then be outputted to the user.

## Installation

Place all files in the same directory, use terminal to navigate inside the directory.
Once inside the directory use gcc to compile the program.
It is required to use command line to open the .csv file, however all that is required
from the use is to type in the name of the .csv file.

## Example of running program
```bash
./a.out passenger-data-short.csv
```

## User input 

Once successful user, should be prompted to enter airline using two-letter abbreviation.

```bash
airline: BA
```

## Output

The program will then count the amount of flights that an airline had,
and the amount of passengers it flew over the course of those flights and output it
to the user.

### Example output

```bash
airline: BA
flights: 7
passengers: 268474
```
