#include <iostream>
#include <string> //we incldude this to make dynamic arrays (vectors)
#include <vector> //we include this because we are going to have some string manipulation
using namespace std;

//wk5_q1_fizzbuzz_with_vectors
//Ratu Faiha Salsabilla Rahmadina_532756

int main(){
    std::vector < std::string> results; //std:: is like cout where we name vector and string as results to store the output

    for (int i=1; i <= 100; i++) //this for loop continues running from 1 to 100
    {
        if (i % 3 == 0 && i % 5 == 0) //here we use the operation modulo because we are looking for certain multiples of a number, in this case we are looking for multiples of three and five
        {
            results.push_back("FizzBuzz"); //this function is used with the std::vector where it adds an element to the end of the vector. In this case, push_back increases the size of the vector since we are adding a new element and we need more space to store this data 
        } else if (i % 3 == 0)
        {
            results.push_back("Fizz"); //for example, here we push back "Fizz" which is added to the end of the results vector
        } else if (i % 5 == 0)
        {
            results.push_back("Buzz"); //we use push back because it's easily managed because if we were to have a collection of elements without knowing its size, this push back function allows us to expand the size
        } else
        {
            results.push_back(std::to_string(i)); //In addition, this function is flexible because we can keep adding elements until we're done, and then process the entire vector after.
        }
    }
    for (const std::string& result : results) //we use another loop here so that it can output each element 
    {
        std::cout << result << std::endl;
    }
return 0;
}