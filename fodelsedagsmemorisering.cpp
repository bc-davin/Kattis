#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

class Friend {
    std::string m_name;
    std::string m_date;
    int m_likes;
public:
    Friend(std::string name, int likes, std::string date) :
        m_name(std::move(name)), m_date(std::move(date)), m_likes(likes) {}

    // Getters for data members
    int getLike() const { return m_likes; }
    std::string getName() const { return m_name; }
    std::string getDate() const { return m_date; }

    // Print function
    void print() const {
        std::cout << m_name << " " << m_date << " " << m_likes << std::endl;
    }
};

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore();
    
    std::vector<Friend> friends;
    std::unordered_map<std::string, Friend> myMap;  // Map using date as key and Friend as value
    std::string name, date, input;
    int likes;

    // Read input and store friends in vector
    while(t--) {
        std::getline(std::cin, input);
        std::stringstream ss(input);
        ss >> name >> likes >> date;
        friends.push_back(Friend(name, likes, date));
    }

    // Process friends and store the one with the highest likes for each date
    for (const auto& f : friends) {
        const std::string& date = f.getDate();  
        auto it = myMap.find(date);
        if (it == myMap.end()) {
            // If the date is not in the map, emplace the friend
            myMap.emplace(date, f);
        } else {
            // If the date is in the map, compare likes and update if necessary
            if (f.getLike() > it->second.getLike()) {
                it->second = f;  // Update the friend with the highest likes
            }
        }
    }
    std::vector<std::pair<std::string, Friend>> sortedFriends(myMap.begin(), myMap.end());

        // Sort the vector in lexicographical order based on the friend's name
        std::sort(sortedFriends.begin(), sortedFriends.end(),
                  [](const std::pair<std::string, Friend>& a, const std::pair<std::string, Friend>& b) {
                      return a.second.getName() < b.second.getName();  // Compare names lexicographically
                  });

    // Output the friend with the highest likes for each date
    std::cout << myMap.size()<< std::endl;
    for (const auto& entry : sortedFriends) {
        std::cout << entry.second.getName()<<std::endl;;
    }

    return 0;
}