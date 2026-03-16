def most_frequent(nums):
    if not nums:
        return None

    
    nums.sort() #using the inbuilt function to sort the list of numbers

    best_value = nums[0] #best values for TC O(n)
    best_count = 1

    current_value = nums[0] ##best values for TC O(n)
    current_count = 1

    
    for i in range(1, len(nums)):  #looping through the numbers
        if nums[i] == current_value:   #comparing if the nmbers are same 
            current_count += 1
        else:
            if current_count > best_count:
                best_count = current_count
                best_value = current_value

            current_value = nums[i]
            current_count = 1


    if current_count > best_count:
        best_value = current_value

    return best_value

nums= [1,1,2,2,1]
print(most_frequent(nums))