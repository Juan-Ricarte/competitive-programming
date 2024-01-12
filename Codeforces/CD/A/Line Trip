#include <iostream>
#include <vector>
#include <algorithm> // for std::max
 
int main() {
    int num_test_cases;
    std::cin >> num_test_cases;
 
    while (num_test_cases--) {
        int num_gas_stations, distance;
        std::cin >> num_gas_stations >> distance;
 
        std::vector<int> gas_stations(distance + 1, 0);
 
        for (int i = 0; i < num_gas_stations; ++i) {
            int station_position;
            std::cin >> station_position;
            gas_stations[station_position] = 1;
        }
 
        int max_tank_capacity = 0;
        int current_tank_capacity = 0;
 
        for (int i = 1; i <= distance; ++i) {
            current_tank_capacity++;
            
            if (i == distance) {
                current_tank_capacity = current_tank_capacity * 2;
                max_tank_capacity = std::max(max_tank_capacity, current_tank_capacity);
            } else if (gas_stations[i] == 0) {
                continue;
            } else {
                max_tank_capacity = std::max(max_tank_capacity, current_tank_capacity);
                current_tank_capacity = 0;
            }
        }
 
        std::cout << max_tank_capacity << std::endl;
    }
 
    return 0;
}