import csv
from collections import Counter
# with open("favorites.csv", "r") as file:
#   reader = csv.reader(file)
#   next(reader)
#   for row in  reader:
#     favorite = row[1]
#     print(favorite)

# with open("favorites.csv", "r") as file:
#   reader = csv.DictReader(file)

#   for row in reader:
#     print(row["language"])

# with open("favorites.csv", "r") as file:
#   reader = csv.DictReader(file)
#   scratch, c, python = 0, 0 ,0
#   for row in reader:
#     favorite = row["language"]
#     if favorite == "Scratch":
#       scratch += 1
#     elif favorite == "C":
#       c += 1
#     elif favorite == "Python":
#       python += 1
# print(f"Scratch:{scratch}")
# print(f"C: {c}")
# print(f"Python: {python}")

# with open("favorites.csv", "r") as file:
#   reader = csv.DictReader(file)
#   counts = {}
#   for row in reader:
#     favorite = row["language"]
#     if favorite in counts:
#       counts[favorite] += 1
#     else:
#       counts[favorite] = 1
# for favorite in sorted(counts, key=counts.get, reverse=True):
#   print(f"{favorite}: {counts[favorite]}")

with open("favorites.csv", "r") as file:
  reader = csv.DictReader(file)
  counts = Counter()
  for row in reader:
    favorite = row["language"]
    counts[favorite] += 1

  for favorite, count in counts.most_common():
    print(f"{favorite}: {count}")
  
print()
print()
with open("favorites.csv", "r") as file:
  reader = csv.DictReader(file)
  counts = Counter()
  for row in reader:
    favorite = row["problem"]
    counts[favorite] += 1

  for favorite, count in counts.most_common():
    print(f"{favorite}: {count}")