# from sys import argv
import sys

if len(sys.argv) != 2:
  print("missing command-line argument")
  sys.exit(1)
print(f"Hello, {sys.argv[1]}")
sys.exit(0)

# if len(argv) == 2:
#   print(f"hello, {argv[1]}")
# else:
#   print("helo, world")