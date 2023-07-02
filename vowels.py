def remove_vowels(string):
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    return ''.join(char for char in string if char not in vowels)
input_string = "Lets Upgrade"
result = input_string
print("Before removing vowels = ",result)
result = remove_vowels(input_string)
print("After removing vowels = ",result)
