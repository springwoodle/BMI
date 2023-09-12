#include<iostream> //стандартная библиотека ввода и вывода
#include<cmath>  //стандартная  математическая библиотека 

using namespace std;

int main() //
{
	double weight, height, BMI;   //

	cout << "\n++++++++++++++++++++++++++++++++++++\n"   //вывод на консоль
		<< "            Body Mass Index"
		<< "\n++++++++++++++++++++++++++++++++++++\n";

	cout << "Enter your weight (in pounds): ";  //вывод
	cin >> weight;// ввод
	cout << "\nEnter your height (in inches): "; //вывод
	cin >> height; //ввод

	BMI = (weight * 703) / (height * height);  // переменная BMI  с значением ......

	if (BMI < 18.5)           //если bmi меньше 18.5 то выводим на консоль You are underweight!! Eat More!!
		cout << "You are underweight!! Eat More!! \n\n";
	if (BMI >= 18.5 && BMI <= 25)//если bmi больше или равно 18.5 или же меньше или равно 25 то выводим на консоль You are in optimal shape!! Good Work! 
		cout << "You are in optimal shape!! Good Work! \n\n";
	if (BMI > 25)//если bmi больше 25 то выводим на консоль You are overweight!! Eat Less!!
		cout << "You are overweight!! Eat Less!! \n\n";//

	system("pause");//чтобы консольное окно сразу не закрывалось а дождалась результата

	return 0;
}