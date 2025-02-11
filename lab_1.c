// Program Name : Parts Record Manager
// Author : Christina Tu

#include <stdio.h>
#include <stdbool.h>

// global variables
int partNum;
char partName[100];
float partSize;
char partSizeMetric[20];
float partCost;

// variable used only in this file
static int numOfChanges = 0;

// records
void printAllRecords() {
    printf ("Current Records: \n");
    printf ("Part Number = %d\n", partNum);
    printf ("Part Name = %s\n", partName);
    printf ("Part Size = %f\n", partSize);
    printf ("Part Size Metric = %s\n", partSizeMetric);
    printf ("Part Cost = %f\n", partCost);
}

int PrintNumOfChanges(bool print) {
    if (print) {
        printf ("You have modified the database %d times.\n", numOfChanges);
    } else {
        numOfChanges++;
        printf ("%d modifications so far.\n", numOfChanges);
    }
    return numOfChanges;
}

void addRecord() {
    printf ("\nEnter Part Number: ");
    scanf ("%d", &partNum);

    printf ("Enter Part Name: ");
    scanf ("%s", partName);

    printf ("Enter Part Size: ");
    scanf ("%f", &partSize);

    printf ("Enter Part Size Metric (ex: lbs, kg, inches): ");
    scanf ("%s", partSizeMetric);

    printf ("Enter Part Cost: ");
    scanf ("%f", &partCost);

    printf ("\nYou entered:\n");
    printf ("Part Number = %d\n", partNum);
    printf ("Part Name = %s\n", partName);
    printf ("Part Size = %f\n", partSize);
    printf ("Part Size Metric = %s\n", partSizeMetric);
    printf ("Part Cost = %f\n", partCost);

    PrintNumOfChanges(false);
}

void deleteRecord() {
    printf ("You have entered the delete last record function. \n");
}

void numOfRecords() {
    printf ("You have entered the Print number of records function. \n");
}

void dataBaseSize() {
    printf ("You have entered the Print database size function. \n");
}

int main(int argc, char *argv[]) {

    int selection;

    while (true) {    
        printf ("\n Parts Management System\n");
        printf ("1. Print all records\n");
        printf ("2. Add record\n");
        printf ("3. Delete the last record\n");
        printf ("4. Print number of records\n");
        printf ("5. Print database size\n");
        printf ("6. Print number of changes\n");
        printf ("7. Exit\n");
        printf ("Please enter your selection (1-7): \n");

        scanf ("%d", &selection);

        switch (selection) {
            case 1: 
                printAllRecords();
                break;

            case 2:
                addRecord();
                break;

            case 3: 
                deleteRecord();
                break;

            case 4:
                numOfRecords();
                break;

            case 5:
                dataBaseSize();
                break;

            case 6:
                PrintNumOfChanges(true);
                break;

            case 7:
                printf ("\n Thank you for using the Parts Management System! \n");
                return 0;

            default:
                printf ("Re-enter a number 1-7 \n");
                break;
        }
    }
}