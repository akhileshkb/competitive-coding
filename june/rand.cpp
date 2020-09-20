#include<bits/stdc++.h>
using namespace std;

int main(void) 
{ 
    // This program will create different sequence of  
    // random numbers on every program run  
  
    // Use current time as seed for random generator 
    srand(time(0)); 
  
    for(int i = 0; i<6; i++) 
        printf(" %d ", rand()%100); 
  
    return 0; 
} 