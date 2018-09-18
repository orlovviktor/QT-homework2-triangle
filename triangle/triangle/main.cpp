#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Please insert side A:";
  cin>>a;
  cout<<"Please insert side B:";
  cin>>b;
  cout<<"Please insert side C:";
  cin>>c;

  if(a+b>c && a+c>b && b+a>c && b+c>a){ //проверка на сушествование
   if( (a==b) && (b==c) && (c==a) ){cout<<"Equilateral triangle";} //проверка на равносторонность
   else if((a==b) || (b==c) || (c==a)){cout<<"Isosceles triangle";} //проверка на равнобедреность
   else{cout<<"Triangle is not equilateral or isosceles";} //если ни то и не другое то произвольный
  }

  else{cout<<"Unable to create triangle";}

  cout<<endl;

  system("PAUSE"); // press any key to continue
  return 0;
}
