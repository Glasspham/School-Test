import json

def manipulate_dict():
    # a. Read the file and convert to dict
    with open("test1.txt", "r") as file:
        content = file.read()
    my_dict = json.loads(content.replace("'", '"'))
    
    # b. Add new element and remove the specified element
    my_dict["tim"] = 99
    my_dict.pop("den", None)
    
    # Write back to the file
    with open("test1.txt", "w") as file:
        json.dump(my_dict, file)

# Example usage
manipulate_dict()
