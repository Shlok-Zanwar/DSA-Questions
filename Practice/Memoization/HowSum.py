def howSum(targetSum, arr, memo):
    # print(memo)
    if targetSum in memo:
        print(memo)
        return memo[str(targetSum)]

    if targetSum == 0:
        return []

    if targetSum < 0:
        return None

    print(memo)
    for num in arr:
        remainder = targetSum - num
        remainderResult = howSum(remainder, arr, memo)
        if(remainderResult != None):
            ans = remainderResult.copy()
            ans.append(num)
            print(memo)
            memo[str(targetSum)] = ans
            return memo[str(targetSum)]

    memo[str(targetSum)] = None
    return None


# print(howSum(7, [2, 3], {}))
# print(howSum(7, [5, 4, 3, 7], {}))
# print(howSum(7, [2, 4], {}))
# print(howSum(8, [2, 3, 5], {}))
print(howSum(300, [7, 14], {}))


