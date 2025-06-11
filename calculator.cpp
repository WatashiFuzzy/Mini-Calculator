#include <iostream>
#include <cmath>
int main() {
  double num1, num2;
  char op;

  std::cout<< "=== May tinh nho ===\n" ;
  std::cout<< "Nhap phep tinh ( vi du, 4 + 5 ): ";
  std::cin >> num1 >> op >> num2;

  switch(op) {
    case '+':
      std::cout << "Dap an: " << num1 + num2 << std::endl;
      break;
    case '-':
      std::cout << "Dap an: " << num1 - num2 << std::endl;
      break;
    case '*':
      std::cout << "Dap an: " << num1 * num2 << std::endl;
    case '/':
      if (num2 == 0){
        std::cout <<"Loi! khong the chia voi 0!" << std::endl;
      }else{
        std::cout << "Dap an: " << num1 / num2 << std::endl;
      }
      break;
    case '^':
      std::cout <<" Dap an: " << pow(num1 , num2) << std::endl;
      break;
    default:
      std::cout << "Loi: toan tu khong hop le " << std::endl;
  }
  return 0;
}
