#include <iostream>
#include <string>

using namespace std;

// Define a class named "CoffeeMachine"
class CoffeeMachine {
private:
  // Attributes (data) - These are hidden from the user
  string model;
  int waterTemperature;
  int coffeeBeanAmount;

public:
  // Constructor
  CoffeeMachine(string modelName, int initialTemperature, int beanAmount)
      : model(modelName), waterTemperature(initialTemperature), coffeeBeanAmount(beanAmount) {}

  // Method to makeCoffee() - This hides the complex steps
  void makeCoffee() {
    cout << "Heating water to " << waterTemperature << " degrees Celsius..." << endl;
    cout << "Adding " << coffeeBeanAmount << " grams of coffee beans..." << endl;
    cout << "Brewing coffee..." << endl;
    cout << "Delicious coffee is ready!" << endl;
  }

  // Getter methods to access the attributes (controlled access)
  string getModel() const { return model; }
  int getWaterTemperature() const { return waterTemperature; }
  int getCoffeeBeanAmount() const { return coffeeBeanAmount; }
};

int main() {
  // Create a CoffeeMachine object
  CoffeeMachine myMachine("SuperBrew 3000", 95, 20);

  // Use the CoffeeMachine object
  cout << "Coffee Machine Model: " << myMachine.getModel() << endl;
  myMachine.makeCoffee();

  cout << "\nWater temperature: " << myMachine.getWaterTemperature() << " degrees Celsius" << endl;
  cout << "Coffee bean amount: " << myMachine.getCoffeeBeanAmount() << " grams" << endl;

  return 0;
}

