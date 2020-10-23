#include <iostream>
using namespace std;
void concatinate(char c[], char d[],int n,int l)
{
  int k;
  int m;
  m=n+l;

  for(int i=0;i<m;i++)
  {
std::cout<<c[i]<<d[i];
  }
}

int main()
{
  int a,n,l;
char c[100];
  char d[100];
  printf("enter");
  scanf("%d\n",&n );
 for(a=0;a<n;a++)
{
  cin>>c[a];
}
std::cout << "enter values of second arrray" << '\n';
std::cin >> l;

for(a=0;a<l;a++)
{
  std::cin >> d[a];
}
concatinate(c,d,n,l);

}
