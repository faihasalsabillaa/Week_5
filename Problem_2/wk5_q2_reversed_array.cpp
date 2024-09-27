#include <iostream>
#include <vector>
using namespace std;

//wk5_q2_reverse_an_array
//Ratu Faiha Salsabilla Rahmadina_532756

std::vector <int> reverseVector(const std::vector <int>& input) //this line of function takes constant reference to the input vector and retruns a new vector that contiains the elements in a reverse order
{
    std::vector<int> reversed; //in the above function we create a new vector called reversed

    for (int i = input.size() - 1; i >= 0; i--)
    {
        reversed.push_back(input[i]); //we use push back here so that each element is added to the reversed vector
    }
return reversed; //after the loops condition is no longer met, the function returns the result into reversed vector
}

int main()
{
    std::vector <int> array = {5, 10, 15, 20, 25, 30};
    std::vector <int> reversedArr = reverseVector(array);
    std::cout << "Reversed Array: "; 

    for (int array: reversedArr)
    {
        std::cout << array << " ";
    }
        std::cout << std::endl;

return 0;
}
