// C++ program to Calculate Waiting
// Time for given Processes
#include <iostream>
using namespace std;

// Function to Calculate waiting time
// and average waiting time
void CalculateWaitingTime(int arrivalTime[], int burstTime[], int N) {

  // Declare the array for waiting
  // time
  int waitingTime[N];

  // Waiting time for first process
  // is 0
  waitingTime[0] = 0;

  // Print waiting time process 1
  cout << "PN\t\tAT\t\t"
       << "BT\t\tWT\n\n";
  cout << "1"
       << "\t\t" << arrivalTime[0] << "\t\t" << burstTime[0] << "\t\t"
       << waitingTime[0] << endl;

  // Calculating waiting time for
  // each process from the given
  // formula
  for (int i = 1; i < 5; i++) {
    // waiting time = Starting time - Arrival time
    waitingTime[i] =
        (arrivalTime[i - 1] + burstTime[i - 1] + waitingTime[i - 1]) -
        arrivalTime[i];

    // Print the waiting time for
    // each process
    cout << i + 1 << "\t\t" << arrivalTime[i] << "\t\t" << burstTime[i]
         << "\t\t" << waitingTime[i] << endl;
  }

  // Declare variable to calculate
  // average
  float average;
  float sum = 0;

  // Loop to calculate sum of all
  // waiting time
  for (int i = 0; i < 5; i++) {
    sum = sum + waitingTime[i];
  }

  // Find average waiting time
  // by dividing it by no. of process
  average = sum / 5;

  // Print Average Waiting Time
  cout << "\nAverage waiting time = " << average;
}

// Driver code
int main() {
  // Number of process
  int N = 5;

  // Array for Arrival time
  int arrivalTime[] = {0, 1, 2, 3, 4};

  // Array for Burst Time
  int burstTime[] = {4, 3, 1, 2, 5};

  // Function call to find
  // waiting time
  CalculateWaitingTime(arrivalTime, burstTime, N);
  return 0;
}

/*
Complexity Analysis:

Time Complexity: O(N)
Auxiliary Space: O(N)
Advantages of FCFS:

The simplest and basic form of CPU Scheduling algorithm
Easy to implement
First come first serve method
*/