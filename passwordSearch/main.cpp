#include <stdio.h>
#include <unordered_map>
#include <string.h>
#include <string>
#include <iostream>

int main () {
            int n;
            std::string msg;
            while (scanf("%d",&n) != EOF) {
                std::unordered_map<std::string, int> map;
                std::cin >> msg;
                int length = (int)msg.length();
                for (int i = 0; i+n <= length; ++i) {
                    std::string substring = msg.substr(i,n);
                    map[substring]++;
                }
                int max = 0;
                std::string res;
                for ( auto it = map.begin(); it != map.end(); ++it ) {
                    if(it->second > max) {
                        max = it->second;
                        res = it->first;
                    }
                }
        std::cout << res << "\n";
    }
    return 0;
}
