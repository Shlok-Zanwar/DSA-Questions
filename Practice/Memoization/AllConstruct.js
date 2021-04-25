// Write a function allConstruct(target, wordBank) that accepts a target string and an array of strings.
// The function should return a 2D array containing all of the ways that the target can be constructed by concatenating elements of the wordBank array. Each element of the 2D array should represent one combination that constructs the target.
// You may reuse elements of wordBank as many times as needed.


const allConstruct = (target, arr, memo = {}) => {
    if(target === ''){
        return [[]];
    }

    if (target in memo){
        memo[target]
    }

    const result = [];

    for (let str of arr){
        if(target.indexOf(str) === 0){
            const suffix = target.slice(str.length);
            const suffixWays = allConstruct(suffix, arr, memo);

            const targetWays = suffixWays.map(way => [ str, ...way ])
            result.push(...targetWays);
        }
    }

    memo[target] = result;
    return result;
}


console.log(allConstruct("purple", ["purp", "p", "ur", "le", "purpl"]));
console.log(allConstruct("abcdef", ["ab", "abc", "cd", "def", "abcd", "ef", "c"]));
console.log(allConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"]));
// No Way to reduce complexity for this
console.log(allConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eee", "eeee", "eeeee", "eeeeee"]))