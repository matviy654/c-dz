//task1
//#include <iostream>
//using namespace std;
//
//int main() {
//    int total_seconds;
//    cout << "Enter the number of seconds since the beginning of the day: ";
//    cin >> total_seconds;
//
//    int hours = total_seconds / 3600;
//    int minutes = (total_seconds % 3600) / 60;
//    int seconds = total_seconds % 60;
//
//    cout << "Current time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
//
//    int seconds_left = 86400 - total_seconds;
//    int hours_left = seconds_left / 3600;
//    int minutes_left = (seconds_left % 3600) / 60;
//    int seconds_left_final = seconds_left % 60;
//
//    cout << "Time left until midnight: " << hours_left << " hours, " << minutes_left << " minutes, " << seconds_left_final << " seconds" << endl;
//
//    return 0;
//}
//task2
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//    double diameter;
//    cout << "Enter the diameter of the circle: ";
//    cin >> diameter;
//
//    double radius = diameter / 2.0;
//    double area = M_PI * radius * radius;
//    double perimeter = M_PI * diameter;
//
//    cout << "Area of the circle: " << area << endl;
//    cout << "Perimeter of the circle: " << perimeter << endl;
//
//    return 0;
//}
////task3
//#include <iostream>
//using namespace std;
//
//int main() {
//    double num1, num2;
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//
//    double sum = num1 + num2;
//    double product = num1 * num2;
//    double average = sum / 2;
//
//    cout << "Sum: " << sum << endl;
//    cout << "Product: " << product << endl;
//    cout << "Average: " << average << endl;
//
//    return 0;
//}

//task4
//#include <iostream>
//using namespace std;
//
//int main() {
//    double num1, num2, num3;
//    cout << "Enter three numbers: ";
//    cin >> num1 >> num2 >> num3;
//
//    double sum = num1 + num2 + num3;
//    double product = num1 * num2 * num3;
//    double average = sum / 3;
//
//    cout << "Sum: " << sum << endl;
//    cout << "Product: " << product << endl;
//    cout << "Average: " << average << endl;
//
//    return 0;
//}

//task5
//#include <iostream>
//using namespace std;
//
//int main() {
//    double price, discount;
//    int quantity;
//
//    cout << "Enter the price of one laptop: ";
//    cin >> price;
//    cout << "Enter the quantity: ";
//    cin >> quantity;
//    cout << "Enter the discount percentage: ";
//    cin >> discount;
//
//    double total_without_discount = price * quantity;
//    double total_with_discount = total_without_discount * (1 - discount / 100);
//
//    cout << "Total order amount after discount: " << total_with_discount << endl;
//
//    return 0;
//}

//task6
//#include <iostream>
//using namespace std;
//
//int main() {
//    double sales;
//    cout << "Enter the total sales amount for the manager: ";
//    cin >> sales;
//
//    double salary = 100 + 0.05 * sales;
//
//    cout << "Manager's final salary: " << salary << endl;
//
//    return 0;
//}

//task7
#include <iostream>
using namespace std;

int main() {
    double file_size_gb, speed_bps;
    cout << "Enter the file size in GB: ";
    cin >> file_size_gb;
    cout << "Enter the internet speed in bps: ";
    cin >> speed_bps;

  
    double file_size_bits = file_size_gb * 8 * 1024 * 1024 * 1024;

    double total_time_seconds = file_size_bits / speed_bps;

    int hours = total_time_seconds / 3600;
    int minutes = (int(total_time_seconds) % 3600) / 60;
    int seconds = int(total_time_seconds) % 60;

    cout << "Time to download the file: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}

