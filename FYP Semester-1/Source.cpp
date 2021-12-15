#include <iostream>
#include <string>
#include <math.h>
using namespace std;


const float PI = 3.14159; int TERMS = 7; //Global values terms is for the loops of trigno

//Functions used
int power1(int a, int b)//Power(exponent)
{
	int ans = a;

	int i = 1;

	while (i < b)
	{
		ans = ans * a;
		i++;
	}
	return ans;
}
double  logg(double y) //for log function 
{
	double x = (y - 1) / (y + 3);
	double sum = 1.0;
	double xpow = x;// variable so i dont need a loop for power 

	for (int n = 1; n <= 151; n++) // first loop of the function 
	{

		if (n % 2 != 0)
		{

			sum = sum + xpow / (double)n;
		}
		xpow = xpow * x;  //keeps the power 

	}

	sum *= 2;// for sum

	return sum;
}


float power(float base, int exp) //For trignometric equations
{
	if (exp < 0) {
		if (base == 0)
			return -0; // Error!!
		return 1 / (base * power(base, (-exp) - 1));
	}
	if (exp == 0)
		return 1;
	if (exp == 1)
		return base;
	return base * power(base, exp - 1);
}
int fact(int n)
{
	return n <= 0 ? 1 : n * fact(n - 1);
}
float sine(int deg) {
	deg %= 360; // make it less than 360
	float rad = deg * PI / 180;
	float sin = 0;

	int i;
	for (i = 0; i < TERMS; i++) { // That's Taylor series!!
		sin += power(-1, i) * power(rad, 2 * i + 1) / fact(2 * i + 1);
	}
	return sin;
}






// CASE 18 DECIMAL TOP BINARY !!!!!!!!!!!!!!!!!!!!!!!!

void dtb()
{
	int a[10], i;
	int n;
	cout << "Enter the number to convert: ";
	cin >> n;
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	cout << "Binary of the given number= ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << a[i];
	}
}
// CASE 18 BINARY TO DECIMAL !!!!!!!!!!!!!!!!!!!!!
void btd()
{
	int num, rem, temp, dec = 0, b = 1;
	cout << "Enter the binary number : ";
	cin >> num;
	temp = num;
	while (num > 0)
	{
		rem = temp % 10;
		dec = dec + rem * b;
		b *= 2;
		temp /= 10;
		num--;
	}
	cout << "The decimal equivalent is: " << dec;
}

//CASE 19 DECIMAL TO HEXA DECIMAL 

void dth()
{
	int numh = 0, temp, i = 1, j, r;
	char hexa[50];
	cout << " Enter a decimal number : ";
	cin >> numh;
	temp = numh;
	while (temp != 0)
	{
		r = temp % 16;
		if (r < 10)
		{
			hexa[i++] = r + 48;
		}
		else
		{
			hexa[i++] = r + 55;
		}
		temp = temp / 16;
	}
	cout << "\nHexadecimal equivalent of " << numh << " is : ";
	for (j = i; j > 0; j--)
	{
		cout << hexa[j];
	}
}

void htd()
{
	char num[20];
	int i, r, len, hex = 0;
	cout << "Enter a hexadecimal number : ";
	cin >> num;
	len = strlen(num);
	for (i = 0; num[i] != '\0'; i++)
	{
		len--;
		if (num[i] >= '0' && num[i] <= '9')
			r = num[i] - 48;
		else if (num[i] >= 'a' && num[i] <= 'f')
			r = num[i] - 87;
		else if (num[i] >= 'A' && num[i] <= 'F')
			r = num[i] - 55;
		hex += r * pow(16, len);
	}
	cout << "\nDecimal equivalent of " << num << " is : " << hex;
}
//CASE 20
void dto()
{
	long num, temp;
	int oct[50], i = 1, j;
	cout << "Enter a decimal number : ";
	cin >> num;
	temp = num;
	while (temp != 0)
	{
		oct[i++] = temp % 8;
		temp = temp / 8;
	}
	cout << "\nOctal equivalent of " << num << " is : ";
	for (j = i - 1; j >= 0; j--)
		cout << oct[j];
}

void otd()
{
	int num, temp, rem, oct = 0, i = 0;
	cout << "Enter an octal number : ";
	cin >> num;
	temp = num;
	while (temp != 0)
	{
		rem = temp % 10;
		oct += rem * pow(8, i++);
		temp = temp / 10;
	}
	cout << "\nDecimal equivalent of " << num << " is : " << oct;
}

//case 21
void bto()
{
	int num, rem, temp, dec = 0, b = 1;
	cout << "Enter the binary number : ";
	cin >> num;
	temp = num;
	while (num > 0)
	{
		rem = temp % 10;
		dec = dec + rem * b;
		b *= 2;
		temp /= 10;
		num--;
	}
	int PlaceHolder = dec;


	long  temp1;
	int oct[50], i = 1, j;


	temp1 = PlaceHolder;
	while (temp1 != 0)
	{
		oct[i++] = temp1 % 8;
		temp1 = temp1 / 8;
	}
	cout << "\nOctal equivalent of " << PlaceHolder << " is : ";
	for (j = i - 1; j >= 0; j--)
		cout << oct[j];

}

void otb()
{
	int num, temp, rem, oct = 0, i = 0;
	cout << "Enter an octal number : ";
	cin >> num;
	temp = num;
	while (temp != 0)
	{
		rem = temp % 10;
		oct += rem * pow(8, i++);
		temp = temp / 10;
	}

	int PlaceHolder = oct;
	int a[10];
	for (i = 0; PlaceHolder > 0; i++)
	{
		a[i] = PlaceHolder % 2;
		PlaceHolder = PlaceHolder / 2;
	}
	cout << "Binary of the given number= ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << a[i];
	}



}









float cosine(int deg) {
	deg %= 360; // make it less than 360
	float rad = deg * PI / 180;
	float cos = 0;

	int i;
	for (i = 0; i < TERMS; i++) { // That's also Taylor series!!
		cos += power(-1, i) * power(rad, 2 * i) / fact(2 * i);
	}
	return cos;
}

float cm(float a)//for cm  into inches
{
	float b = a / 2.54;

	return b;

}


float inches(float a)//for inches into meter
{
	float b = a / 39.37;

	return b;

}

float cc(float a) // celsius into farenheit
{
	float b = (a * 9 / 5) + 32;

	return b;
}
double SquareRoot(double num) // Square root
{
	double lower = 0;
	double upper = num;
	double temp = 0;

	int nCount = 50;

	while (nCount != 0)
	{
		temp = (lower + upper) / 2;
		if (temp * temp == num)
		{
			return temp;
		}
		else if (temp * temp > num)

		{
			upper = temp;
		}
		else
		{
			lower = temp;
		}
		nCount--;
	}
	return temp;
}

void menu(void)  //(User interface menu)
{
	cout << "\t\t\t\t\t\tSCIENTIFIC CALCULATOR \n";
	cout << "________________________________________________________________________________________________________________________" << endl;

	cout << "\n\tPress A for addition"
		<< "\n\tPress B for substraction"
		<< "\n\tPress C for multiplication"
		<< "\n\tPress D for division"
		<< "\n\tPress E for exponent"
		<< "\n\tPress F for remainder"
		<< "\n\tPress G for square root"
		<< "\n\tPress H for Sine"
		<< "\n\tPress I for Cosine"
		<< "\n\tPress J for Tan"
		<< "\n\tPress K for inverse of Sin"
		<< "\n\tPress L for inverse of Cos"
		<< "\n\tPress M for inverse of Tan"
		<< "\n\tPress N for Log"
		<< "\n\tPress O for converting cm into inches"
		<< "\n\tPress P for converting inches into meters"
		<< "\n\tPress Q for converting Celsius into Fahrenheit"
		<< "\n\tPress R for converting decimal into binary and vice versa"
		<< "\n\tPress S for converting decimal into hexadecimal and vice versa."
		<< "\n\tPress T for converting decimal into octal and vice versa"
		<< "\n\tPress U for converting binary into octal and vice versa" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;

}
//Start of main
int main()
{
	int times = 2; int will;
	int choice; int option = 0; float result = 0.0;
	float arr[100] = {};
	char choicem;
	int i = 0, j = 0;
	do
	{
		system("CLS");
		menu();


		cout << endl << " Please enter your choice: ";
		cin >> choicem;

		system("CLS");

		switch (toupper(choicem))
		{
		case 'A':
			cout << "\n\t ADDITION" << endl;
			i = 2, j = 3;



			cout << "Please enter number " << '1' << ": ";
			cin >> arr[0];
			cout << "Please enter number " << '2' << ": ";
			cin >> arr[1];

			cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
			cin >> option;
			if (option == 1)
			{
				do
				{
					cout << "Please enter number " << j << ": ";
					cin >> arr[i];
					i++; j++; times++;
					cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
					cin >> option;
				} while (option == 1);
			}


			result = arr[0];
			for (int i = 1; i < times; i++)
			{
				result += arr[i];
			}
			cout << "Result: " << result << endl;
			break;
		case 'B':
			cout << "\n\t SUBTRACTION" << endl;
			i = 2, j = 3;
			cout << "Please enter number " << '1' << ": ";
			cin >> arr[0];
			cout << "Please enter number " << '2' << ": ";
			cin >> arr[1];
			cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
			cin >> option;
			if (option == 1)
			{
				do
				{
					cout << "Please enter number " << j << ": ";
					cin >> arr[i];
					i++; j++; times++;
					cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
					cin >> option;
				} while (option == 1);
			}
			result = arr[0];
			for (int i = 1; i < times; i++)
			{
				result -= arr[i];
			}
			cout << "Result: " << result << endl;
			break;

		case 'C':
			cout << "\n\t MULTIPLICATION" << endl;
			i = 2, j = 3;
			cout << "Please enter number " << '1' << ": ";
			cin >> arr[0];
			cout << "Please enter number " << '2' << ": ";
			cin >> arr[1];
			cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
			cin >> option;
			if (option == 1)
			{
				do
				{
					cout << "Please enter number " << j << ": ";
					cin >> arr[i];
					i++; j++; times++;
					cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
					cin >> option;
				} while (option == 1);
			}
			result = arr[0];
			for (int i = 1; i < times; i++)
			{
				result *= arr[i];
			}
			cout << "Result: " << result << endl;
			break;
		case 'D':
			cout << "\n\t DIVISION" << endl;
			i = 2, j = 3;
			cout << "Please enter number " << '1' << ": ";
			cin >> arr[0];
			cout << "Please enter number " << '2' << ": ";
			cin >> arr[1];
			cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
			cin >> option;
			if (option == 1)
			{
				do
				{
					cout << "Please enter number " << j << ": ";
					cin >> arr[i];
					i++; j++; times++;
					cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
					cin >> option;
				} while (option == 1);
			}
			result = arr[0];
			for (int i = 1; i < times; i++)
				if (arr[i] == 0)
				{
					cout << "Cannot be devided by zero!" << endl;
				}
				else
				{
					result /= arr[i];
					cout << "Result: " << result << endl;
					break;
				}

			break;

		case 'E':
			cout << "\n\t POWER" << endl;
			int a, b;
			do
			{


				cout << "Enter the number: ";
				cin >> a;
				cout << "Enter exponent: ";
				cin >> b;

				if (!isalpha(a) && !isalpha(b))

				{

					cout << "Result: " << power1(a, b) << endl;
				}
				else
				{
					cout << "wrong";
				}
			} while (!isdigit(a) && !isdigit(b));

			break;

		case 'F':
		{
			cout << "\n\t MODULOUS" << endl;
			i = 2, j = 3;
			int arr1[100] = {};
			int result2 = 0;
			cout << "Please enter number " << '1' << ": ";
			cin >> arr[0];
			cout << "Please enter number " << '2' << ": ";
			cin >> arr[1];
			cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
			cin >> option;
			if (option == 1)
			{
				do
				{
					cout << "Please enter number " << j << ": ";
					cin >> arr[i];
					i++; j++; times++;
					cout << "Do you wish to enter more numbers? (Press 1 for yes): ";
					cin >> option;
				} while (option == 1);
			}
			result = arr[0];
			for (int i = 1; i < times; i++)
				if (arr[i] == 0)
				{
					cout << "Cannot be devided by zero!" << endl;
				}
				else
				{
					result2 %= arr1[i];
					cout << "Result: " << result2 << endl;
					break;
				}

			break;
		}

		case 'G':
		{
			cout << "\n\t SQUAREROOT" << endl;
			double num = 0;
			cout << "Enter the number\n";
			cin >> num;

			if (num < 0)
			{
				cout << "Error: Negative number!";
				return 0;
			}

			cout << "Square roots of the number entered are:  +" << SquareRoot(num) << " and  -" << SquareRoot(num) << endl;
			break;
		}
		case 'H':
		{
			cout << "\n\t SINE" << endl;
			float sin = 0;
			cout << "Enter a number: ";
			cin >> sin;
			cout << "Result: " << sine(sin);
			break;
		}
		case 'I':
		{
			cout << "\n\t COSINE" << endl;
			float cos = 0;
			cout << "Enter a number: ";
			cin >> cos;
			cout << "Result: " << cosine(cos);
			break;
		}
		case 'J':
		{
			cout << "\n\t TAN" << endl;
			float tan = 0;
			cout << "Enter a number: ";
			cin >> tan;

			cout << "Result: " << sine(tan) / cosine(tan);
			break;
		}
		case 'K':
		{
			cout << "\n\t INVERSE SINE" << endl;
			float sin = 0;
			cout << "Enter a number: ";
			cin >> sin;
			cout << "Result: " << 1 / sine(sin);
			break;
		}
		case 'L':
		{
			cout << "\n\t INVERSE COSINE" << endl;
			float cos = 0;
			cout << "Enter a number: ";
			cin >> cos;
			cout << "Result: " << 1 / cosine(cos);
			break;
		}
		case 'M':
		{
			cout << "\n\t INVERSE TAN" << endl;
			float tan = 0;
			cout << "Enter a number: ";
			cin >> tan;
			float res = sine(tan) / cosine(tan);

			cout << "Result: " << 1 / res;
			break;
		}
		case 'N':
		{
			cout << "\n\t LOG" << endl;
			double log;
			cout << "Enter a number: ";
			cin >> log;
			if (log == 0)
			{
				cout << "Result: 0" << endl;
			}
			else
			{
				cout << "Result: " << logg(log);
			}


			break;
		}
		case 'O':
		{
			cout << "\n\tCM into Inches" << endl;
			float v;// Variable initialized for value of cm
			cout << "Enter a number: ";
			cin >> v;
			cout << "Result: " << cm(v);
			break;
		}
		case 'P':
		{
			cout << "\n\tInches into Meter" << endl;
			float v;// Variable initialized for value of inches
			cout << "Enter a number: ";
			cin >> v;
			cout << "Result: " << inches(v);
			break;
		}
		case 'Q':
		{
			cout << "\n\tCELSIUS into FARENHITE" << endl;
			float v;// Variable initialized for value of celsius
			cout << "Enter a number: ";
			cin >> v;
			cout << "Result: " << cc(v);

			break;
		}
		case 'R':
		{

			int choice18;
			do {
				cout << "\t\nWhich conversion do you want to perform? "
					<< "\n\t1.Decimal to binary."
					<< "\n\t2.Binary to decimal. ";
				cout << "\nChoice: ";
				cin >> choice18;
				switch (choice18)
				{
				case 1:
				{
					dtb();
					break;
				}
				case 2:
				{
					btd();
					break;
				}
				default:
					cout << "invalid option !!!!!!!! \n\tPlease choose again." << endl;
				}
			} while (choice18 < 1 || choice18>2);
			break;
		}
		case 'S':
		{
			int choice19;
			do {
				cout << "\t\nWhich conversion do you want to perform? "
					<< "\n\t1.Decimal to hexa."
					<< "\n\t2.Hexa to decimal. ";
				cout << "\nChoice: ";
				cin >> choice19;
				switch (choice19)
				{
				case 1:
				{
					dth();
					break;
				}
				case 2:
				{
					htd();
					break;
				}
				default:
					cout << "invalid option !!!!!!!! \n\tPlease choose again." << endl;
				}
			} while (choice19 < 1 || choice19>2);
			break;
		}
		case 'T':
		{
			int choice20;
			do {
				cout << "\t\nWhich conversion do you want to perform? "
					<< "\n\t1.Decimal to octal."
					<< "\n\t2.octal to decimal. ";
				cout << "\nChoice: ";
				cin >> choice20;
				switch (choice20)
				{
				case 1:
				{
					dto();
					break;
				}
				case 2:
				{
					otd();
					break;
				}
				default:
					cout << "invalid option !!!!!!!! \n\tPlease choose again." << endl;
				}
			} while (choice20 < 1 || choice20>2);





			break;
		}
		case 'U':
		{
			int choice21;
			do {
				cout << "\t\nWhich conversion do you want to perform? "
					<< "\n\t1.Binary to Octal."
					<< "\n\t2.Octal to Binary. ";
				cout << "\nChoice: ";
				cin >> choice21;
				switch (choice21)
				{
				case 1:
				{
					bto();
					break;
				}
				case 2:
				{
					otb();
					break;
				}
				default:
					cout << "invalid option !!!!!!!! \n\tPlease choose again." << endl;
				}
			} while (choice21 < 1 || choice21>2);

			break;
		}

		default:
		{
			cout << "Invalid choice !! \t Please choose again" << endl;
			cout << endl;

		}

		}
		cout << "\n\n\t\tDo you wish to perform another task? (Press 1 for yes): ";//User's choice about continuing.
		cin >> will;
	} while (will == 1);//End of do while loop
	return 0;
}//End of main

