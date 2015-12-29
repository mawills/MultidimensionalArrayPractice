#include <iostream>
#include "Employee.h"


using namespace std;

const int NUM_ROWS = 2;
const int NUM_COLS = 3;

void printEmployee(Employee empArray[][NUM_COLS],int dim1, int dim2)
{
    //Cycles through every element in a 2-D array and prints its information
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2; j++)
        {
            cout << "Age: "     << empArray[i][j].getAge()
                 << " ID: "     << empArray[i][j].getId()
                 << " Salary: " << empArray[i][j].getSalary() << endl;
        }
    }

    //Cycles through every element in a 2D array to add up the total age and total Salary
    int totalAge = 0;
    int totalSalary = 0;
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2; j++)
        {
            totalAge += empArray[i][j].getAge();
            totalSalary += empArray[i][j].getSalary();
        }
    }
    //Print the average age and average salary
    cout << endl << endl << "Average Age: " << totalAge/(NUM_ROWS*NUM_COLS) << endl;
    cout << "Average Salary: " << totalSalary/(NUM_ROWS*NUM_COLS);
}

int main()
{
    Employee x[NUM_ROWS][NUM_COLS];

    //Populate the employee array with test data
    x[0][0].setAge(30);
    x[0][0].setId(111);
    x[0][0].setSalary(30000);
    x[0][1].setAge(31);
    x[0][1].setId(112);
    x[0][1].setSalary(31000);
    x[0][2].setAge(32);
    x[0][2].setId(113);
    x[0][2].setSalary(32000);
    x[1][0].setAge(33);
    x[1][0].setId(114);
    x[1][0].setSalary(33000);
    x[1][1].setAge(34);
    x[1][1].setId(115);
    x[1][1].setSalary(34000);
    x[1][2].setAge(35);
    x[1][2].setId(116);
    x[1][2].setSalary(35000);

    printEmployee(x,NUM_ROWS,NUM_COLS);


    return 0;
}


