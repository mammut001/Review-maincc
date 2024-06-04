//Template
//#include <iostream>
//#include <string>
//using std::cout;
//using std::endl;
//using std::string;
//
//template <typename T>
//T add(T a, T b){
//    return a+b;
//
//}
//int main() {
//    cout<< "Hello, World!" << endl;
//    std::cout << add<int> (3,4) << std::endl;
//    cout << add<double> (3.0,4.0) << endl;
//
//    cout << add<string> ("hello World", "nihao") << endl;
//    return 0;
//}

//#include <iostream>
//#include <string>
//using std::cout;
//using std::endl;
//using std::string;
//
//class Person {
//public:
//    string name;
//    int age;
//
//    Person(string n, int a): name(std::move(n)), age(a){
//
//    }
//
//    ~Person(){
//        cout << name << " destroyed " << endl;
//    }
//    void introduce(){
//        cout << name << age << endl;
//    }
//};
//int main() {
//    Person p("jack",32);
//
//    p.introduce();
//    return 0;
//}
#include <vector>
#include <map>
#include <iostream>

using std::vector;
using std::map;
using std::string;
using std::cout;
using std::endl;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<std::string, int> dic;
        for(int i = 0; i < nums.size(); i++){
            int result = target - nums[i];
            if(result)
            cout << result << endl;


        }
        return {1,2};
    }
};