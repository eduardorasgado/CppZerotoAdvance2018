#include <iostream>
#include <iomanip>
std::string seriesSum(int n)
{
    // Happy Coding ^_^
    if(n == 0) { return "0.00"; }
    float result = 0.005f;
    float partial = 1;
    for(int i = 1;i <= n; ++i)
    {
      if(i == 1) { result += 1.0; }
      else {
        partial += 3.0;
        result += (1.0f / partial);
        //std::cout << std::setprecision(2) << std::fixed << result;
        //std::cout << "\n";
        //std::cout << partial  << ", res: "<< result << std::endl;
      }
    }
    
    std::string res_string  = std::to_string(result).substr(0, 4);
    //std::cout << res_string << std::endl;
    return res_string;
}

int main()
{
    std::cout << seriesNum(9) << std::endl;
    return 0;
}
