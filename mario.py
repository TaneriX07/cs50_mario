# Get height from user
while True:
  try:
    height = int(input("Height: "))

    if height > 0 and height <= 8:
      break
    else:
      raise ValueError

  except ValueError:
    print("The height should be a positive integer between 1 and 8 (inclusive)")

# Print the pyramid
for i in range(0, height):
  print(" " * (height-i) + "#" * (i+1), end="")
  print(" " * 2, end="")
  print("#" * (i+1))
