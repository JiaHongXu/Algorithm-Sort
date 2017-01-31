//
//  main.cpp
//  Sort
//
//  Created by 307A on 2017/1/31.
//  Copyright © 2017年 徐嘉宏. All rights reserved.
//

#include <iostream>
#include "Solution.hpp"

using namespace std;

#define SIZE(array) (sizeof(array))/(sizeof(array[0]))

int main(int argc, const char * argv[]) {
    int array[] = {4,9,5,7,3,1,8,12,2,6};
    //print origin array
    cout << "before: ";
    for (int i=0; i<SIZE(array); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    Solution *solution = new Solution();
    
    //change solution
//    solution->bubbleSort(array, SIZE(array));
    solution->selectionSort(array, SIZE(array));
//    solution->insertSort(array, SIZE(array));
//    solution->quickSort(array, 0, SIZE(array)-1);
    
    //print result array
    cout << " after: ";
    for (int i=0; i<SIZE(array); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
