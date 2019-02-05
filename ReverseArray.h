#pragma once
#include <iostream>
#include <vector>

 using namespace std;

 void reverseArray(int array[], int start, int end)
 {
   while (start < end)
   {
     int temp = array[start];
     array[start] = array[end];
     array[end] = temp;
     start++;
     end--;
   }
 }

 void printArray(int array[], int size)
 {
   for (int i = 0; i < size; i++)
   {
     cout << array[i] << " ";
   }
 }
