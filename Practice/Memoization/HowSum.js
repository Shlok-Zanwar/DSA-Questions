const howSum = (targetSum, arr, memo) => {
    // console.log(memo);
    if(targetSum in memo) return memo[targetSum];
    
    if(targetSum === 0){
        return [];
    }
    if(targetSum < 0){
        return null;
    }
    

    for (let num in arr){
        const remainder = targetSum - num;
        const remainderResult = howSum(remainder, arr, memo);
            if(remainderResult !== null){
                console.log(remainderResult);
                memo[targetSum] = [ ...remainderResult, num ];
                return memo[targetSum];
            }
    }

    memo[targetSum] = null;
    return null;
}
// Some issue

console.log(howSum(7, [2, 3], {}));
// console.log(howSum(7, [5, 3, 4, 7]));
// console.log(howSum(7, [2, 4]));
// console.log(howSum(8, [2, 3, 5]));
// console.log(howSum(300, [7, 14]));
