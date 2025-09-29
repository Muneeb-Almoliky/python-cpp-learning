def main():
    total_sum = 0  # Total sum of odd numbers across all sets
    for i in range(1, 11):
        # Prompt user to enter the number of values in the current set
        while True:
            try:
                count = int(input(f"How many numbers are in set {i}? "))
                if count > 0:
                    break  # Input is valid
                else:
                    print("Please enter a positive integer.")
            except ValueError:
                print("That doesn't look like a number. Try again!")
        set_sum = 0  # Sum of odd numbers for the current set
        for j in range(1, count + 1):
            while True:
                try:
                    number = int(input(f"Enter number {j} in set {i}: "))
                    break  # Input is valid
                except ValueError:
                    print("Invalid entry. Please provide an integer.")
            if number % 2 != 0:  # Check if the number is odd
                set_sum += number
        print(f"The sum of odd numbers in set {i} is: {set_sum}")
        total_sum += set_sum  # Add the set's sum to the total sum

    print(f"The total sum of all odd numbers across the sets is: {total_sum}")

if __name__ == "__main__":
    main()
