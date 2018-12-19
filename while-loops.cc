#include <iostream>


using namespace std;

// int main()

// {
//     int index = 1;
//     while (index <= 10) {
//         cout << index << endl;
//         index++;
// }

//     return 0;
// }

// --------do while loops-----

// int main()

// {
//     int index = 1;
//      do{
//         cout << index << endl;
//         index++;
//     } while (index <= 5);

//     return 0;
// }

// ------------for loops-----------

// int main()

// {
        
//     for(int i = 1; i <= 10; i++) {   
//         cout << i << endl;
// }

//     return 0;
// }
// ----------------itirate through an array of intigers or over the elements inside an array-------------------
// int main()

// {
//     int nums[] = {1, 2, 3, 9, 6, 5};    
//     for(int i = 0; i < 6; i++) {   
//         cout << nums[i] << endl;
// }

//     return 0;
// }
// -------------------Exponential function------------
// int power(int baseNum, int powNum) {
//     int result = 1;
//     for (int i = 0; i < powNum; i++) {
//         result = result * baseNum;
//     }
//     return result;
// }


// int main()

// {
//   cout << power(3, 4);
   
//     return 0;
// }


// ---------------2D Array-----------------

// int main()
// {
//     int numberGrid[3][2] = {
//                             {1, 2},
//                             {3, 4},
//                             {5, 6}
//                      };
                     

//     cout << numberGrid[0][1];
    
//     return 0;
// }

int main()
{
    int numberGrid[3][2] = {
                            {1, 2},
                            {3, 4},
                            {5, 6}
                     };
                     
    // -------nexted forLoop------
   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
           cout << numberGrid [i][j];
        }
        cout << endl;
   }
    
    return 0;
}