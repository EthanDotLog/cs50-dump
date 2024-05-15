 #include <stdio.h>
 #include <cs50.h>

string checkTriangle(int a, int b, int c);
int main(void)
{
  int a = get_int("First side: ");
  int b = get_int("Second side: ");
  int c = get_int("Third side: ");
  printf("%s\n", checkTriangle(a, b, c));
}

string checkTriangle(int a, int b, int c)
{
  string result;
  if (a + b > c && a + c > b && b + c > a)
  {
    result = "Yes, it is a triangle in nature!";
  }
  else
  {
    result = "No - wtf are you even doing?";
  }
  return result;
}