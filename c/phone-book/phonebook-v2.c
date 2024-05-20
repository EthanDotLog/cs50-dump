#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
  string name;
  string number;
}
person;

int main(void)
{
  person people[3];
  people[0].name = "Jim";
  people[0].number = "+1-444-444-4444";
  people[1].name = "bob";
  people[1].number = "+1-222-222-2222";
  people[2].name = "clint";
  people[2].number = "+1-333-333-3333";

  string name = get_string("Name: ");
  for (int i = 0; i < 3; i++)
  {
    if (strcmp(name, people[i].name) == 0)
    {
      printf("BINGO - found %s's number\n#:%s\n", people[i].name, people[i].number);
      return 0;
    }
  }
  printf("shucks, you dont know %s's number...", name);
  return 1;
}
