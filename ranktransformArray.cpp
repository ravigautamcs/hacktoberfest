#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

std::vector<int> arrayRankTransform(std::vector<int>& arr) {
    std::vector<int> temp(arr);
    std::sort(temp.begin(), temp.end());
    std::unordered_map<int, int> mp;

    int rank = 1;
    for (int i = 0; i < temp.size(); i++) {
        if (mp.find(temp[i]) == mp.end()) {
            mp[temp[i]] = rank++;
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = mp[arr[i]];
    }
    
    return arr;
}

int main() {
    std::vector<int> arr;
    arr.push_back(40);
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    std::vector<int> result = arrayRankTransform(arr);

    std::cout << "Ranked Array: ";
    for (int rank : result) {
        std::cout << rank << " ";
    }
    std::cout << std::endl;

    return 0;
}
