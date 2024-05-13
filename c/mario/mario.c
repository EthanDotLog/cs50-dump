#include <stdio.h>
#include <cs50.h>

int main(void)
{
  //dont do
  printf("????\n");
  for (int i = 0; i < 4; i++)
  {
    printf("?\n");
  }

  for (int c = 0; c < 4; c++)
  {
  if (c == 3)
  {
    printf("?\n");
  }
  else
  {
    printf("?");
  }
}


//easy assignment method
int height = 6;
int width = 12;
for (int q = 0; q < height; q++)
{
  for (int w = 0; w < width; w++)
  {
    printf("#");
  }
  printf("\n");
}

//prompt user for height and width method
int a;
int s;
do {
  a = get_int("height: ");
}
while (a < 1);
do {
  s = get_int("width: ");
}
while (s < 1);

for (int d = 0; d < a; d++)
{
  for (int e = 0; e < s; e++)
  {
    printf("#");
  }
  printf("\n");
}
} 