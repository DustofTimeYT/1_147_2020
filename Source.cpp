//#include <iostream>
//int fibonachi(int n)
//	{
//		if (n == 0)
//			return(0);
//		if (n == 1)
//			return 1; 
//		return fibonachi(n - 1) + fibonachi(n - 2);
//		
//	}

/*int main()
{
	for (int i=0; i < 10; i++)
	{
		std::cout << fibonachi(i) << "  ";
	}
}*/
//#include <iostream>
//#include <string>
//using std::string;
//using std::cout;
//using std::endl;
//
//class Person
//{
//public:
//    string name;
//    int age;
//    double middleRange;
//    Person(string n, int a, double k)
//    {
//        name = n; age = a; middleRange = k;
//    }
//    Person(string n, int a)
//    {
//        name = n; age = a;
//        middleRange = 80.8;
//    }
//    Person(string n)
//    {
//        name = n;
//        age = 18;
//        middleRange = 56.8;
//    }
//    Person()
//    {
//        name = "Bob";
//        age = 18;
//        middleRange = 69.9;
//    }
//    void move()
//    {
//        cout << name << " is moving" << endl;
//    }
//};
//int main()
//{
//    Person nikita("Nikita", 18,89.0);
//    cout << "Name: " << nikita.name << "\tAge: " << nikita.age << "\tMiddle range: " << nikita.middleRange << endl;
//    Person tom("Tom", 22);
//    cout << "Name: " << tom.name << "\tAge: " << tom.age << "\tMiddle range: " << tom.middleRange << endl;
//    Person sam("Sam");
//    cout << "Name: " << sam.name << "\tAge: " << sam.age << "\tMiddle range: " << sam.middleRange << endl;
//    Person bob = Person();
//    cout << "Name: " << bob.name << "\tAge: " << bob.age << "\tMiddle range: " << bob.middleRange << endl;
//    return 0;
//}

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class Weapon
{
public:
	
	Weapon(string a, double b, double c, string d, int e, int f, string g)
	{
		name = a; caliber = b; weight = c; country = d; year = e; successfulShots = f; owner = g;		
	}
	Weapon(string a, double b, double c, string g)
	{
		name = a; caliber = b; owner = g;
		weight = c;
		country = "none";
		year = 0;
		successfulShots = 0;
	}
	Weapon(string a, double b, double c, string d, string g)
	{
		name = a; caliber = b; owner = g;
		weight = c;
		country = d;
		year = 0;
		successfulShots = 0;
	}
	Weapon(string a, double b, double c, string d, int e, string g)
	{
		name = a; caliber = b; owner = g;
		weight = c;
		country = d;
		year = e;
		successfulShots = 0;
	}
	Weapon(string a, double b, string g)
	{
		name = a; caliber = b; owner = g;
		weight = 1000;
		country = "none";
		year = 0;
		successfulShots = 0;
	}
	
	void setSuccessfulShots(int a=0)
	{
		if (a > successfulShots)
			successfulShots = successfulShots + a;
	}
	void setName(string a)
	{
		a = name;
	}
	void setCaliber(double a)
	{
		a = caliber;
	}
	void setWeight(double a)
	{
		a = weight;
	}
	void setCountry(string a)
	{
		a = country;
	}
	void setYear(int a)
	{
		a = year;
	}
	void setOwner(string a)
	{
		a = owner;
	}
	void getOwner()
	{
		std::cout << "\nowner" << owner << "\n";
	}
	void getInform()
	{
		std::cout << "name " << name
			<< "\ncaliber " << caliber
			<< "\nweight " << weight
			<< "\ncountry " << country
			<< "\nyear " << year
			<< "\nsuccesfulShots " << successfulShots
			<< "\nowner" << owner << "\n";
	}
	void getSuccessfulShots()
	{
		std::cout << "\nsuccesfulShots " << successfulShots << "\n";
	}

private:
	string name;
	double caliber;
	double weight;
	string country;
	int year;
	int	successfulShots;
	string owner;
};


int main()
{
	Weapon AK47("AK", 7.62, "Nikita");
		AK47.getInform();
		AK47.getSuccessfulShots();
}


