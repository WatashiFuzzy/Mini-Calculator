#include <iostream>
#include <cmath>
int main(){
  double n, num1, num2, num3;
  char op;
  double delta;
  std::cout << "=== May tinh ===" << std::endl;
  std::cout << "Nhap 1 neu ban muon tinh phuong trinh bac 2" << std::endl;
  std::cout << "Nhap 2 neu ban muon tinh nhung phep tinh binh thuong + - / * ^" <<std::endl;
  std::cout << "Nhap gia tri ban muon tinh: " <<std::endl;
  std::cin >> n ;
  // Phuong trinh bac 2 neu n == 1
  if (n == 1 ){
    std::cout << "Nhap so a: ";
    std::cin >> num1;
    std::cout << "Nhap so b: ";
    std::cin >> num2;
    std::cout << "Nhap so c: ";
    std::cin >> num3;

    if ( num1 == 0 ){
      std::cout << "vui long nhap lai a != 0";
      return 1;
    } else {
      delta = (num2*num2) - 4 * num1 * num3;
      if ( delta > 0 ) {
        double x1 = (-num2 + sqrt(delta)) / ( 2 * num1 );
        double x2 = (-num2 - sqrt(delta)) / ( 2 * num1 );
        std::cout << "x1 = " << x1 <<std::endl;
        std::cout << "x2 = " << x2 <<std::endl;
      }
      else if( delta == 0){
        {
          std::cout << " Phuong trinh co 2 nghiem kep: " ;
          double x = -num2 / (2 * num1 );
          std::cout << x << std::endl;
        }
      }else{
        std::cout << "Phuong trinh vo ngiem!" <<std::endl;
      }
    }
  } else {
    // Toan tu neu n == 2
    std::cout << "Nhap phep tinh ( vi du: 5 +2 ): " ;
    std::cin >> num1 >> op >> num2 ;

    switch (op){
      case '+':
        std::cout << "Dap an: " << num1 + num2 << std::endl;
        break;
      case '-':
        std::cout << "Dap an: " << num1 - num2 << std::endl;
        break;
      case '*':
        std::cout << "Dap an: " << num1 * num2 << std::endl;
        break;
      case '/':
        std::cout << "Dap an: " << num1 / num2 << std::endl;
        break;
      case '^':
        std::cout << "Dap an: " << pow(num1 , num2 ) << std::endl;
        break;
      default:
        std::cout << "loi! toan tu khop hop le! " << std::endl;
    }
  }
  return 0;
}
