s = input("Do you agree? ")

s = s.lower()

if s in ["y", "yes"]:
  print(f"Agreed")
elif s in ["n", "no"]:
  print(f"Not agreed")