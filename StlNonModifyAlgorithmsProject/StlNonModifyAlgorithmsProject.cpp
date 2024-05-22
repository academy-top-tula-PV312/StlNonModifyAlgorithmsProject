#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
#include <iomanip>
#include <string>

auto Print = [](auto const remark, auto const& cont)
    {
        std::cout << remark;
        std::for_each(cont.begin(), cont.end(),
            [](auto item)
            {
                std::cout << item << " "; 
            }
        );
        std::cout << "\n";
    };


int RandInt()
{
    return rand() % 100;
}



int main()
{
    srand(time(nullptr));

    int size{ 10 };

    std::vector<int> v1(size);
    std::generate(v1.begin(), v1.end(), []() { return rand() % 10; }); //RandInt);
    //Print("Vector: ", v1);

    //std::cout << std::boolalpha;
    //std::cout << std::all_of(v1.begin(),
    //    v1.end(),
    //    [](auto item) {
    //        return item > 0; //% 2 == 0;
    //    }) << "\n";

    //std::cout << std::any_of(v1.begin(),
    //    v1.end(),
    //    [](auto item) {
    //        return item < 0; //% 2 == 0;
    //    }) << "\n";

    //std::cout << std::none_of(v1.begin(),
    //    v1.end(),
    //    [](auto item) {
    //        return item < 0; //% 2 == 0;
    //    }) << "\n";

    //std::cout << "Input value: ";
    //int key{ 10 };
    //std::cin >> key;

    //auto itResult = std::find(v1.begin(),
    //    v1.end(),
    //    key);
    //std::cout << ((itResult == v1.end())
    //    ? "Not found\n"
    //    : "Key = " + std::to_string(*itResult)) << "\n";

    //itResult = std::find_if(v1.begin(),
    //    v1.end(),
    //    [key](auto item) { return item > key; });
    //std::cout << ((itResult == v1.end())
    //    ? "Not found\n"
    //    : "Key = " + std::to_string(*itResult)) << "\n";

    //itResult = std::find_if_not(v1.begin(),
    //    v1.end(),
    //    [key](auto item) { return item > key; });
    //std::cout << ((itResult == v1.end())
    //    ? "Not found\n"
    //    : "Key = " + std::to_string(*itResult)) << "\n";

    /*for (int i{}; i < v1.size(); i++)
    {
        int min = i;
        for (int j{ i + 1 }; j < v1.size(); j++)
            if (v1[j] < v1[min])
                min = j;
        std::swap(v1[i], v1[min]);
    }*/

    /*for (auto it{ v1.begin() }; it != v1.end(); it++)
    {
        auto left = it;
        auto min = find_if(
            left + 1,
            v1.end(), 
            [&left](auto item)
            {
                return item < *left;
            });
        std::swap(*left, *min);
        Print("Vector sort: ", v1);
    }*/

    //Print("Vector sort: ", v1);

    /*std::vector<int> templ { 10, 20, 40 };
    std::vector<int> v3{ 50, 80, 30, 60, 10, 90 };
    auto itResult = std::find_first_of(
        v3.begin(),
        v3.end(),
        templ.begin(),
        templ.end(),
        [](auto item1, auto item2) { return item1 < item2; });
    if (itResult != v3.end())
        std::cout << "Value = " << *itResult << "\n";
    else
        std::cout << "Not found\n";*/

    /*std::cout << "Input value: ";
    int key;
    std::cin >> key;

    std::cout << std::count(v1.begin(), v1.end(), key) << "\n";
    std::cout << std::count_if(v1.begin(), v1.end(),
        [key](auto item) { return item > key; }
        );*/

    std::vector<int> v5{ 5, 1, 2, 6, 6, 6, 6, 1, 3, 3, 0 };
    std::list<int> l5{ 1, 2, 3 };

    //auto result = std::mismatch(v5.begin() + 2, v5.end(), ++l5.begin());
    //auto result = std::equal(v5.begin() + 2, v5.end(), ++l5.begin());
    //auto result = std::search(v5.begin(), v5.end(), l5.begin(), l5.end());
    auto result = std::search_n(v5.begin(), v5.end(), 2, 3);

    //std::cout << *result.first << " " << *result.second << "\n";
    //std::cout << result << "\n";
    if (result != v5.end())
    {
        for (; result != v5.end(); result++)
            std::cout << *result << " ";
        std::cout << "\n";
    }
    else
        std::cout << "not found\n";
    



    /*std::vector<int> v2(size);
    int i{};
    std::generate(v2.begin(), v2.end(), [&i]() 
        {
            return ++i;
        });

    Print("Vector before: ", v2);*/
    /*std::for_each(v2.begin(), 
                  v2.end(), 
                  [](auto item) { return ++item; });*/
    /*for (auto item : v2)
    {
        item = item * item;
    }*/
    /*for (auto it{ v2.end() - 1 }; it != v2.begin(); it--)
        *it = *it * *it;

    Print("Vector after: ", v2);*/

    
}

