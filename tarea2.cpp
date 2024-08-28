
#include <iostream>
int main()
{

  // ejercicio 2.16
  // int a, b;
  // std::cout << "ingresa 2 num";
  // std::cin >> a >> b;
  // std::cout << a + b << std::endl;
  // std::cout << a * b << std::endl;
  // std::cout << a - b << std::endl;
  // std::cout << a / b << std::endl;

  // 2.18
  // int a, b;
  // std::cout << "escribe 2 num: ";
  // std::cin >> a >> b;
  // if (a > b)
  //   std::cout << "a is larger than b" << std::endl;
  // else if (a == b)
  //   std::cout << "these numbers are equal" << std::endl;
  // else
  //   std::cout << "b is larger than b";

  // 2.19
  // int a, b, c;
  // std::cout << "input three different integers: ";
  // std::cin >> a >> b >> c;
  // std::cout << "Sum is " << a + b + c << std::endl;
  // std::cout << "Average is " << (a + b + c) / 3 << std::endl;
  // std::cout << "Product is " << (a * b * c) << std::endl;

  // int smallest = a;
  // if (b < smallest)
  // {
  //   smallest = b;
  // }
  // if (c < smallest)
  // {
  //   smallest = c;
  // }
  // std::cout << "Smallest is " << smallest << std::endl;

  // int largest = a;
  // if (b > largest)
  // {
  //   largest = b;
  // }
  // if (c > largest)
  // {
  //   largest = c;
  // }

  // std::cout << "Largest is " << largest << std::endl;

  // return 0;

  // 2.20
  // int r;
  // std::cin >> r;
  // std::cout << r * 2;
  // std::cout << 2 * 3.1415 * r << std::endl;
  // std::cout << 3.1415 * r * r << std::endl;

  // 2.21
  // std::cout << "  CCC   +      +" << std::endl;
  // std::cout << " C      +      +" << std::endl;
  // std::cout << "C     +++++  +++++" << std::endl;
  // std::cout << " C      +      +" << std::endl;
  // std::cout << "  CCC   +      +" << std::endl;

  // 2.22
  //  *****
  //  ****
  //  ***
  //  **
  //  *

  // 2.23
  // int a, b, c, d, e;
  // std::cin >> a >> b >> c >> d >> e;
  // int largest = a;
  // if (b > largest)
  //   largest = b;
  // if (c > largest)
  //   largest = c;
  // if (d > largest)
  //   largest = d;
  // if (e > largest)
  //   largest = e;

  // int smallest = a;
  // if (b < smallest)
  //   smallest = b;
  // if (c < smallest)
  //   smallest = c;
  // if (d < smallest)
  //   smallest = d;
  // if (e < smallest)
  //   smallest = e;

  // std::cout << "largest: " << largest << std::endl;
  // std::cout << "smallest is: " << smallest << std::endl;

  // 2.24
  // int a, b;
  // std::cin >> a >> b;
  // if (a % 2 == 0)
  //   std::cout << "a is even";
  // else
  //   std::cout << "a is odd";

  // if (b % 2 == 0)
  //   std::cout << "b is even";
  // else
  //   std::cout << "b is odd";

  // if (a + b % 2 == 0)
  //   std::cout << "a + b is even";
  // else
  //   std::cout << "a + b is odd";

  // 2.25
  // int a, b, c;
  // std::cin >> a >> b >> c;
  // if (c % a == 0 && c % b == 0)
  //   std::cout << "a y b son factores de c";

  // 2.26
  // std::cout << "* * * * * * * *" << std::endl;
  // std::cout << " * * * * * * * *" << std::endl;
  // std::cout << "* * * * * * * *" << std::endl;
  // std::cout << " * * * * * * * *" << std::endl;
  // std::cout << "* * * * * * * *" << std::endl;
  // std::cout << " * * * * * * * *" << std::endl;
  // std::cout << "* * * * * * * *" << std::endl;
  // std::cout << " * * * * * * * *" << std::endl;

  // bool flag = true;
  // for (int i = 0; i < 9; i++)
  // {
  //   if (flag)
  //   {
  //     std::cout << "* * * * * * * *" << std::endl;
  //     flag = false;
  //   }
  //   else
  //   {
  //     std::cout << " * * * * * * * *" << std::endl;
  //     flag = true;
  //   }
  // }

  // 2.27
  // char c;
  // std::cin >> c;
  // std::cout << static_cast<int>(c);

  // 2.28
  // int n, r, reverse;
  // std::cout << " 4 digit integer: " << std::endl;
  // std::cin >> n;
  // while (n > 0)
  // {
  //   r = n % 10;
  //   std::cout << r << " ";
  //   n = n / 10;
  // }

  // 2.29
  // surface, volume
  // std::cout << "Face length\tSurface area\tVolume" << std::endl;
  // std::cout << "of cube  (cm)\tof cube (cm^2)\tof cube(cm^3)" << std::endl;
  // std::cout << "0\t\t" << 6 * 0 * 0 << "\t\t" << 0 * 0 * 0 << std::endl;
  // std::cout << "1\t\t" << 6 * 1 * 1 << "\t\t" << 1 * 1 * 1 << std::endl;
  // std::cout << "2\t\t" << 6 * 2 * 2 << "\t\t" << 2 * 2 * 2 << std::endl;
  // std::cout << "3\t\t" << 6 * 3 * 3 << "\t\t" << 3 * 3 * 3 << std::endl;
  // std::cout << "4\t\t" << 6 * 4 * 4 << "\t\t" << 4 * 4 * 4 << std::endl;

  // 2.30
  int weight, height;
  double bmi;
  bmi = weight / (height * height);
  std::cout << "Your bmi is: " << bmi << std::endl;
  std::cout << "BMI Values" << std::endl;
  std::cout << "Underweigth:\tless than 18.5" << std::endl;
  std::cout << "Normal:\tbetween 18.5 and 24.9" << std::endl;
  std::cout << "Overweigth:\tbetween 25 and 29.9" << std::endl;
  std::cout << "Obsese:\t30 or greater" << std::endl;

  return 0;
}
