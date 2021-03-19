#include <vector>
#include <string>

class Solution {
public:

    std::string defangIPaddrSolutionOne(std::string address)
    {
        std::string str;
        for (int i = 0; i < address.size(); ++i)
        {
            if (address[i] != '.')
            {
                str += address[i];
            }
            else
            {
                str += "[.]";
            }

        }
        return str;
    }

    std::string defangIPaddrSolutionTwo(std::string address)
    {
        std::vector<std::string> vec;
        std::string str;


        for (int i = 0; i < address.size(); ++i)
        {
            if (address[i] != '.')
            {
                str += address[i];
            }
            else
            {
                vec.push_back(str);
                str = "";
            }

            if (i == address.size() - 1)
            {
                vec.push_back(str);
                str = "";
            }
        }



        for (int i = 0; i < vec.size(); ++i)
        {

            str += vec[i];
            if (i != vec.size() - 1)
                str += "[.]";
        }

        return str;
    }


    std::string defangIPaddrSolutionThree(std::string address)
    {
        std::vector<std::string> vec;
        std::string str;


        for (int i = 0; i < address.size(); ++i)
        {
            if (address[i] != '.')
            {
                str += address[i];
            }
            if (address[i] == '.' || (i == address.size() - 1))
            {
                vec.push_back(str);
                str = "";
            }

        }



        for (int i = 0; i < vec.size(); ++i)
        {

            str += vec[i];
            if (i != vec.size() - 1)
                str += "[.]";
        }

        return str;
    }
};