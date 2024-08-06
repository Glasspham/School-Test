def count_digits_and_spaces(s):
    digit_count = 0
    space_count = 0
    for char in s:
        if char.isdigit():
            digit_count += 1
        elif char.isspace():
            space_count += 1
    return digit_count, space_count

# Example usage
input_string = input("Enter a string with name and date of birth: ")
digits, spaces = count_digits_and_spaces(input_string)
print("Number of digit characters:", digits)
print("Number of space characters:", spaces)
