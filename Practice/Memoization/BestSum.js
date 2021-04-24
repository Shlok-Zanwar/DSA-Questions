const bestSum = (targetSum, arr, memo = {}) => {
    if(targetSum in memo) return memo[targetSum];
    if(targetSum === 0) return [];
    if(targetSum < 0) return null;

    let shortestCombination = null;

    for(let num in arr){
        const remainder = targetSum - num;
        const remainderResult = bestSum(remainder, arr, memo);
        if(remainderResult !== null){
            const combination = [ ...remainderResult, num ];
            if(shortestCombination === null || combination.length < shortestCombination.length){
                shortestCombination = combination;
            }
        }
    }

    memo[targetSum] = shortestCombination;
    return shortestCombination;
}

console.log(howSum(7, [5, 3, 4, 7]));
console.log(howSum(8, [2, 3, 5]));
console.log(howSum(8, [1, 4, 5]));
console.log(howSum(100, [1, 2, 5, 25]));
