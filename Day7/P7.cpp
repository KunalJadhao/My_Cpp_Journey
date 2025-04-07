// 2d arrays

#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
cout << " 2D Array (Matrix): \n";
for (int i = 0; i < 3; i++)
{
    for (int k = 0; k < 3; k++)
    {
        cout << matrix[i][k] << " ";
    }
    cout << endl;
}
return 0;
}