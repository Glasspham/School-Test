def find_key_with_min_value(d):
    if not d:
        return None
    return min(d, key=d.get)

# Example usage
input_dict = {1: 10, 2: 3, 3: 5, 4: 1}
min_key = find_key_with_min_value(input_dict)
print("Key with the minimum value:", min_key)
