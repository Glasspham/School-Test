def merge_lists():
    input_string = input("Enter a string of words separated by spaces: ")
    L1 = input_string.split()

    L2 = []
    while True:
        element = input("Enter an element for L2 (or 'stop' to finish): ")
        if element.lower() == 'stop':
            break
        L2.append(element)
    
    L1.extend(L2)
    print("Merged list:", L1)

# Example usage
merge_lists()
